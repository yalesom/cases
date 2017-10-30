<?php
/**
 * @file
 * chart_node.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function chart_node_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|highcharts|default';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'highcharts';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '4',
    'children' => array(
      0 => 'field_enable_mouse_tracking',
      1 => 'field_show_data_labels',
      2 => 'field_show_legend',
      3 => 'field_show_tool_tip',
      4 => 'field_tool_tip_value',
      5 => 'field_yaxis',
      6 => 'field_stack_values',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-options field-group-tabs',
      ),
    ),
  );
  $field_groups['group_options|node|highcharts|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Options');

  return $field_groups;
}
