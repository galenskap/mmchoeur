<?php
/**
 * @file
 * evenements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function evenements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function evenements_node_info() {
  $items = array(
    'evenement' => array(
      'name' => t('Événement'),
      'base' => 'node_content',
      'description' => t('Événement ou concert '),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
