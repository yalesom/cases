<?php
/**
 * @file
 * gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gallery_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|gallery|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'options',
    'weight' => '3',
    'children' => array(
      0 => 'field_auto_play',
      1 => 'field_pause_on_hover',
      2 => 'field_show_captions',
      3 => 'field_show_controls',
      4 => 'field_transition_delay',
      5 => 'field_transition_mode',
      6 => 'field_adaptive_height',
      7 => 'field_show_play_pause',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_options|node|gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('options');

  return $field_groups;
}
