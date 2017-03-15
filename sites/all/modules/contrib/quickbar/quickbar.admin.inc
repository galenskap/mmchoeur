<?php

/**
 * @file
 * Handles quickbar administration
 *
 * Assign roles a toolbar.
 */

/**
 * Page to administer quickbar
 *
 * Sets which role uses which menu for it's quickbar.
 *
 * @return
 *  A form setting quicbar menus per role.
 */
function quickbar_form() {
  $form['intro'] = array(
    '#markup' => '<p>' . t('Choose which menu should be used for each role. If a user has multiple roles they will get the menu of the higher role which has an assigned menu.') . '</p>',
  );

  $available_menus = menu_get_menus();

  $roles = user_roles();
  if (variable_get('quickbar_use_machine_names', 0)) {
    $roles = _quickbar_role_machine_names($roles);
  }

  $role_weights = variable_get('quickbar_role_weights', array());
  $stored_menus = variable_get('quickbar_role_menus', array());
  foreach ($roles as $rid => $name) {
    if (empty($role_weights[$rid])) {
      $role_weights[$rid] = 0;
    }
  }

  // Add 'None' so that the admin can choose for no menu to be assigned to a role.
  array_unshift($available_menus, 'None');

  foreach ($role_weights as $rid => $weight) {
    $form['toolbar:' . $rid] = array(
      '#weight' => $weight,
      'title' => array(
        '#markup' => $roles[$rid],
      ),
      'weight' => array(
        '#type' => 'weight',
        '#default_value' => $weight,
      ),
      'menu' => array(
        '#type' => 'select',
        '#default_value' => isset($stored_menus[$rid]) ? $stored_menus[$rid] : '',
        '#options' => $available_menus,
      ),
      // This is just to key off of in the theme function, so we don't render
      // elements that are not meant to be part of the table. There might be
      // a better way to handle this ??
      'rid' => array(
        '#type' => 'hidden',
        '#value' => $rid,
      ),
      'operations' => array(
        'configure' => array(
          '#type' => 'link',
          '#title' => t('configure'),
          '#href' => 'admin/config/user-interface/quickbar/' . $rid . '/edit',
        ),
      ),
    );
  }

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => 'Advanced Settings',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['advanced']['machine_names'] = array(
    '#title' => 'Use machine names instead of roll ids',
    '#description' => "If enabled, quickbar will store it's settings as machine names instead of roll ids.  Since machine names don't exist in drupal quickbar takes some guesses. This means that their is a remote chance that roles could possibley collide if they are named almost the same. For example 'User Role' and 'user-role' will share the same machine name.",
    '#type' => 'checkbox',
    '#default_value' => variable_get('quickbar_use_machine_names', 0),
  );

  $form['#tree'] = TRUE;

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit handler for quickbar_form()
 *
 * @see quickbar_form()
 * @ingroup forms
 */
function quickbar_form_submit(&$form, &$form_state) {
  // Set default variables;
  $roles = user_roles();
  $roles_machine_names = _quickbar_role_machine_names($roles);
  $weights = array();
  $menus = array();

  $machine_name_setting = $form_state['values']['advanced']['machine_names'];
  $previous_machine_name_setting = variable_get('quickbar_use_machine_names', NULL);

  // If switching between using rids and using machine names make sure all the
  // settings get transferred over.
  if (!is_null($previous_machine_name_setting) && $previous_machine_name_setting != $machine_name_setting) {
    if ($machine_name_setting) {
      $convert_from = $roles;
      $convert_to = $roles_machine_names;
    }
    else {
      $convert_from = $roles_machine_names;
      $convert_to = $roles;
    }

    foreach ($convert_from as $key => $value) {
      $new_key = array_search($value, $convert_to);
      if ($settings = variable_get('quickbar_settings_' . $key, '')) {
        variable_set('quickbar_settings_' . $new_key, $settings);
        variable_del('quickbar_settings_' . $key);
      }
      $menus[$new_key] = $form_state['values']['toolbar:' . $key]['menu'];
      $weights[$new_key] = $form_state['values']['toolbar:' . $key]['weight'];
    }
  }
  else if (is_null($previous_machine_name_setting) && $machine_name_setting) {
    foreach ($roles as $key => $value) {
      $new_key = array_search($value, $roles_machine_names);
      $menus[$new_key] = $form_state['values']['toolbar:' . $key]['menu'];
      $weights[$new_key] = $form_state['values']['toolbar:' . $key]['weight'];
    }
  }
  else {
    if ($machine_name_setting) {
      $roles = $roles_machine_names;
    }

    foreach ($roles as $rid => $name) {
      $menus[$rid] = $form_state['values']['toolbar:' . $rid]['menu'];
      $weights[$rid] = $form_state['values']['toolbar:' . $rid]['weight'];
    }
  }

  if (!variable_get('quickbar_role_weights', NULL)) {
    // Role weights have not been setup by the admin
    $weights = _quickbar_default_weights();
  }
  else {
    // Sort weights before saving them to variable
    asort($weights);
  }

  variable_set('quickbar_role_weights', $weights);
  variable_set('quickbar_role_menus', $menus);
  variable_set('quickbar_use_machine_names', $machine_name_setting);

  drupal_set_message(t('Your configuration has been saved.'));
}

/**
 * Theme handler for quickbar_form()
 *
 * @see theme_quickbar_form()
 * @ingroup themable
 */
function theme_quickbar_form($variables) {
  $form = $variables['form'];

  $output = drupal_render($form['intro']);

  drupal_add_tabledrag('quickbar-role-order', 'order', 'sibling', 'quickbar-role-order-weight');

  $header = array(
    t('Role'),
    t('Assigned Menu'),
    t('Weight'),
    t('Operations'),
  );

  // Build the table rows.
  $rows = array();
  foreach (element_children($form) as $item) {
    $element = &$form[$item];

    // Build a list of operations.
    $operations = array(drupal_render($element['operations']));

    // Add special class to be used with tabledrag.js
    if (isset($element['weight'])) {
      $element['weight']['#attributes']['class'] = array('quickbar-role-order-weight');
    }

    if (isset($element['rid'])) {
      $row = array();
      $row[] = drupal_render($element['title']);
      $row[] = drupal_render($element['menu']);
      $row[] = drupal_render($element['weight']);
      $row = array_merge($row, $operations);
      $row = array('data' => $row);
      $row['class'][] = 'draggable';
      $rows[] = $row;
    }
  }

  $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'quickbar-role-order')));
  $output .= drupal_render_children($form);

  return $output;
}

// Route to our form.
function _quickbar_configure_page($rid) {
  $output = drupal_get_form('quickbar_configure_form', $rid);

  return $output;
}

/**
 * Quickbar default weights.
 */
function _quickbar_default_weights() {
  // Get the user roles
  $roles = user_roles();
  $rids = array_keys($roles);

  $default_weights = array();
  foreach ($rids as $rid) {
    $default_weights[$rid] = $rid * -2;
  }

  asort($default_weights);
  return $default_weights;
}

/**
 * Page to configure a toolbar
 *
 * Configures the settings for a toolbar.
 *
 * @return
 *  A form setting the settings for a toolbar.
 */
function quickbar_configure_form($form_state, $info) {
  $iconset_info = module_invoke_all('quickbar_iconset_info');

  $iconsets = array('_none' => 'None');
  foreach ($iconset_info as $iconset_id => $iconset_data) {
    $iconsets[$iconset_id] = $iconset_data['title'];
  }

  $settings = variable_get('quickbar_settings_' . arg(4), _quickbar_default_settings());

  $form = array(
    'settings' => array(
      '#type'  => 'fieldset',
      '#title' => t('General Settings'),
      'iconset' => array(
        '#type'          => 'select',
        '#title'         => 'Iconset',
        '#description'   => 'Choose the iconset for the toolbar.',
        '#default_value' => $settings['iconset'],
        '#options'       => $iconsets,
      ),
      'sticky' => array(
        '#type'          => 'checkbox',
        '#title'         => 'Make the toolbar sticky at the top',
        '#description'   => 'If checked, the toolbar will always be visible as the user scrolls down the page.',
        '#default_value' => $settings['sticky'],
      ),
      'float' => array(
        '#type'          => 'checkbox',
        '#title'         => "Make the toolbar 'float' over page",
        '#description'   => 'If checked, the toolbar will overlay the top portion of the webpage.',
        '#default_value' => $settings['float'],
        '#states'        => array(
          'visible' => array(
            ':input#edit-settings-sticky' => array('checked' => FALSE),
          ),
        ),
      ),
      'secondary_menu_visibility' => array(
        '#type' => 'checkbox',
        '#title' => 'Keep secondary menu open',
        '#description' => 'If checked, the secondary menu will display on page load for relevant pages instead of being collapsed.',
        '#default_value' => $settings['secondary_menu_visibility'],
      ),
      'nofollow' => array(
        '#title' => 'Do not follow top-level links',
        '#description' => 'If checked, top-level links of toolbar will only open secondary menus.',
        '#type' => 'checkbox',
        '#default_value' => $settings['nofollow'],
      ),
      'expanded_items' => array(
        '#type' => 'fieldset',
        '#title' => t('Expanded Items'),
        '#collapsible' => 1,
        '#collapsed' => 0,
        'expand_node_add' => array(
          '#title' => 'Expand node add',
          '#description' => 'To show add content type links.',
          '#type' => 'checkbox',
          '#default_value' => (!empty($settings['expanded_items']['expand_node_add']) ? 1 : 0),
        ),
        'expand_structure_menu' => array(
          '#title' => 'Expand structure menu links',
          '#description' => 'To show structure menu links.',
          '#type' => 'checkbox',
          '#default_value' => (!empty($settings['expanded_items']['expand_structure_menu']) ? 1 : 0),
        ),
      ),
    ),
    'submit' => array(
      '#type'  => 'submit',
      '#value' => t('Save configuration'),
    ),
    '#tree' => TRUE,
  );

  return $form;
}

/**
 * Submit handler for quickbar_configure_form()
 *
 * @see quickbar_configure_form()
 * @ingroup forms
 */
function quickbar_configure_form_submit(&$form, &$form_state) {
  variable_set('quickbar_settings_' . arg(4), $form_state['values']['settings']);

  drupal_set_message('The toolbar settings have been saved.');

  // Go back to the quickbar form.
  $form_state['redirect'] = 'admin/config/user-interface/quickbar';
}
