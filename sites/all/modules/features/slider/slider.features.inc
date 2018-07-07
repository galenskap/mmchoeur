<?php
/**
 * @file
 * slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slider_image_default_styles() {
  $styles = array();

  // Exported image style: slider.
  $styles['slider'] = array(
    'label' => 'Slider',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slider_node_info() {
  $items = array(
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => t('Images affichées en carrousel sur la page d\'accueil'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => t('Caché, sert de description pour les aveugles et les moteurs de recherche comme Google'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
