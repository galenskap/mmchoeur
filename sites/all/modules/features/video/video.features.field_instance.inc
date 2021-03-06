<?php
/**
 * @file
 * video.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function video_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-videos-field_url_youtube'.
  $field_instances['node-videos-field_url_youtube'] = array(
    'bundle' => 'videos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Exemple : https://youtu.be/rafxXc75KZo',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url_youtube',
    'label' => 'URL de la vidéo Youtube',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exemple : https://youtu.be/rafxXc75KZo');
  t('URL de la vidéo Youtube');

  return $field_instances;
}
