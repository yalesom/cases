<?php
/**
 * @file
 * warpwire_video_node_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function warpwire_video_node_type_taxonomy_default_vocabularies() {
  return array(
    'new_workbench_access' => array(
      'name' => 'Workbench Access',
      'machine_name' => 'new_workbench_access',
      'description' => '',
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
