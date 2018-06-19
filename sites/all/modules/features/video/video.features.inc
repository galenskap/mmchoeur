<?php
/**
 * @file
 * video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function video_node_info() {
  $items = array(
    'videos' => array(
      'name' => t('Vidéos'),
      'base' => 'node_content',
      'description' => t('Vidéos affichées en page d\'accueil (3 maximum de présentées, ordonnées par date de mise en ligne, la plus récente en premier)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
