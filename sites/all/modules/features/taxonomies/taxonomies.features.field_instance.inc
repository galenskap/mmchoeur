<?php
/**
 * @file
 * taxonomies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function taxonomies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-saisons-field_saison_courante'.
  $field_instances['taxonomy_term-saisons-field_saison_courante'] = array(
    'bundle' => 'saisons',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Cocher pour marquer la saison comme étant la saison courante',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_saison_courante',
    'label' => 'Saison courante',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cocher pour marquer la saison comme étant la saison courante');
  t('Saison courante');

  return $field_instances;
}
