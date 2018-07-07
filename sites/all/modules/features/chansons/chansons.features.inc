<?php
/**
 * @file
 * chansons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chansons_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function chansons_node_info() {
  $items = array(
    'chanson' => array(
      'name' => t('Chanson'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
