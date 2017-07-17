<?php
/**
 * @file
 * warpwire_video_node_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function warpwire_video_node_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|warpwire_video|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'warpwire_video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'hidden',
    'weight' => '10',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'hidden',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-hidden field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hidden|node|warpwire_video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('hidden');

  return $field_groups;
}
