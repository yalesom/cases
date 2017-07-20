<?php
/**
 * @file
 * gnam_case_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gnam_case_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gnam_case_content_type_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Global Networks Case Study'),
      'base' => 'node_content',
      'description' => t('Start a new <em>Case study</em>. Be sure to select <create new book> in the <em>Book outline</em> section at the bottom of the page. '),
      'has_title' => '1',
      'title_label' => t('Case name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
