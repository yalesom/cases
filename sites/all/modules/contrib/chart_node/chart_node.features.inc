<?php
/**
 * @file
 * chart_node.features.inc
 */

/**
 * Implements hook_node_info().
 */
function chart_node_node_info() {
  $items = array(
    'highcharts' => array(
      'name' => t('HighCharts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
