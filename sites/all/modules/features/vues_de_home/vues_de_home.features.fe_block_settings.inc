<?php
/**
 * @file
 * vues_de_home.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vues_de_home_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-repertoire-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'repertoire-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mmchoeur' => array(
        'region' => 'home_bottom',
        'status' => 1,
        'theme' => 'mmchoeur',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
