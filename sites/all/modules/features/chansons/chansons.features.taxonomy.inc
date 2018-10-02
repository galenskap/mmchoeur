<?php
/**
 * @file
 * chansons.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function chansons_taxonomy_default_vocabularies() {
  return array(
    'styles' => array(
      'name' => 'Styles',
      'machine_name' => 'styles',
      'description' => 'Styles musicaux : jazz, classique, world...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
