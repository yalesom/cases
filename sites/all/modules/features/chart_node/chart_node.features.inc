<?php
/**
 * @file
 * chart_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chart_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function chart_node_node_info() {
  $items = array(
    'highcharts' => array(
      'name' => t('Highcharts'),
      'base' => 'node_content',
      'description' => t('Interactive chart getting its data from an uploaded CSV file. This designed to display inside a "page modal".'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
