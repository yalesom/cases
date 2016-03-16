<?php
/**
 * @file
 * gnam_case_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gnam_case_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_details|node|book|form';
  $field_group->group_name = 'group_case_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Case details',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_case_number',
      2 => 'field_publish_date',
      3 => 'field_updated',
      4 => 'field_case_subtitle',
      5 => 'field_sponsors',
      6 => 'field_disclaimer',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-case-details field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_case_details|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case|node|book|form';
  $field_group->group_name = 'group_case';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case',
    'weight' => '1',
    'children' => array(
      0 => 'group_case_details',
      1 => 'group_tiles',
      2 => 'group_credits',
      3 => 'group_produced_by',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-case field-group-htabs',
      ),
    ),
  );
  $export['group_case|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credits|node|book|form';
  $field_group->group_name = 'group_credits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Credits',
    'weight' => '4',
    'children' => array(
      0 => 'field_credits',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-credits field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_credits|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_produced_by|node|book|form';
  $field_group->group_name = 'group_produced_by';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Produced By',
    'weight' => '6',
    'children' => array(
      0 => 'field_produced_by',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-produced-by field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_produced_by|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tile_settings|field_collection_item|field_tile|form';
  $field_group->group_name = 'group_tile_settings';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tile settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_teaser',
      1 => 'field_page_url',
      2 => 'field_color',
      3 => 'field_image',
      4 => 'field_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tile settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-tile-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tile_settings|field_collection_item|field_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tiles|node|book|form';
  $field_group->group_name = 'group_tiles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Case tiles',
    'weight' => '3',
    'children' => array(
      0 => 'field_tile',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-tiles field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tiles|node|book|form'] = $field_group;

  return $export;
}
