<?php
/**
 * @file
 * walmex_sample_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function walmex_sample_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_content|node|page|form';
  $field_group->group_name = 'group_basic_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_items';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_primary_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection_items|field_collection_item|field_document_list|form';
  $field_group->group_name = 'group_collection_items';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_document_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collection details',
    'weight' => '5',
    'children' => array(
      0 => 'field_document_item',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collection details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-collection-items field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_collection_items|field_collection_item|field_document_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_items|node|page|form';
  $field_group->group_name = 'group_content_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'group_basic_content',
      1 => 'group_grid',
      2 => 'group_document_list',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-content-items field-group-htabs',
      ),
    ),
  );
  $export['group_content_items|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_list|node|page|form';
  $field_group->group_name = 'group_document_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_items';
  $field_group->data = array(
    'label' => 'Additional resources',
    'weight' => '12',
    'children' => array(
      0 => 'field_document_list',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional resources',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-document-list field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_document_list|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid|node|page|form';
  $field_group->group_name = 'group_grid';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_items';
  $field_group->data = array(
    'label' => 'Document grid',
    'weight' => '11',
    'children' => array(
      0 => 'field_document_grid',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-grid field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_grid|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tile_settings|field_collection_item|field_document_grid|form';
  $field_group->group_name = 'group_tile_settings';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_document_grid';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tile settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_color',
      1 => 'field_icon',
      2 => 'field_teaser',
      3 => 'field_image',
      4 => 'field_page_url',
      5 => 'field_document',
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
  $export['group_tile_settings|field_collection_item|field_document_grid|form'] = $field_group;

  return $export;
}
