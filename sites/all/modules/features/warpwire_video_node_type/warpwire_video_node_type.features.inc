<?php
/**
 * @file
 * warpwire_video_node_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function warpwire_video_node_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function warpwire_video_node_type_node_info() {
  $items = array(
    'warpwire_video' => array(
      'name' => t('Warpwire Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
