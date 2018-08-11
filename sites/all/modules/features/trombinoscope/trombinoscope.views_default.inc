<?php
/**
 * @file
 * trombinoscope.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trombinoscope_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'trombinoscope';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Trombinoscope';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trombinoscope';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_pupitre',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Champ: Pupitre */
  $handler->display->display_options['fields']['field_pupitre']['id'] = 'field_pupitre';
  $handler->display->display_options['fields']['field_pupitre']['table'] = 'field_data_field_pupitre';
  $handler->display->display_options['fields']['field_pupitre']['field'] = 'field_pupitre';
  $handler->display->display_options['fields']['field_pupitre']['label'] = 'Pupitre ';
  $handler->display->display_options['fields']['field_pupitre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pupitre']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_pupitre']['element_class'] = 'h2';
  $handler->display->display_options['fields']['field_pupitre']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_pupitre']['element_label_class'] = 'h2';
  $handler->display->display_options['fields']['field_pupitre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pupitre']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_pupitre']['element_wrapper_class'] = 'pupitre_grid';
  $handler->display->display_options['fields']['field_pupitre']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Utilisateur: Image */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Champ: Utilisateur: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Champ: Pupitre (field_pupitre) */
  $handler->display->display_options['sorts']['field_pupitre_tid']['id'] = 'field_pupitre_tid';
  $handler->display->display_options['sorts']['field_pupitre_tid']['table'] = 'field_data_field_pupitre';
  $handler->display->display_options['sorts']['field_pupitre_tid']['field'] = 'field_pupitre_tid';
  /* Sort criterion: Utilisateur: Date de création */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Utilisateur: Actif */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Champ: Pupitre (field_pupitre) */
  $handler->display->display_options['filters']['field_pupitre_tid']['id'] = 'field_pupitre_tid';
  $handler->display->display_options['filters']['field_pupitre_tid']['table'] = 'field_data_field_pupitre';
  $handler->display->display_options['filters']['field_pupitre_tid']['field'] = 'field_pupitre_tid';
  $handler->display->display_options['filters']['field_pupitre_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_pupitre_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pupitre_tid']['vocabulary'] = 'pupitres';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'trombinoscope';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trombinoscope';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['trombinoscope'] = array(
    t('Master'),
    t('Trombinoscope'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Pupitre '),
    t('Page'),
  );
  $export['trombinoscope'] = $view;

  return $export;
}
