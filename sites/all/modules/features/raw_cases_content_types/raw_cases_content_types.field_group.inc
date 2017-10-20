<?php
/**
 * @file
 * raw_cases_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function raw_cases_content_types_field_group_info() {
  $field_groups = array();

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
    'weight' => '14',
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
  $field_groups['group_basic_content|node|page|form'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_case_number',
      2 => 'field_publish_date',
      3 => 'field_updated',
      4 => 'field_custom_logo',
      5 => 'group_sponsor_group',
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
  $field_groups['group_case_details|node|book|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'group_case_details',
      1 => 'group_tiles',
      2 => 'group_credits',
      3 => 'group_htab_access',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-case field-group-htabs',
      ),
    ),
  );
  $field_groups['group_case|node|book|form'] = $field_group;

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
  $field_groups['group_collection_items|field_collection_item|field_document_list|form'] = $field_group;

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
    'weight' => '5',
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
  $field_groups['group_content_items|node|page|form'] = $field_group;

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
    'weight' => '9',
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
  $field_groups['group_credits|node|book|form'] = $field_group;

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
    'weight' => '16',
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
  $field_groups['group_document_list|node|page|form'] = $field_group;

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
    'weight' => '15',
    'children' => array(
      0 => 'field_document_grid',
      1 => 'field_grid_columns',
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
  $field_groups['group_grid|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|warpwire_video|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_embed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'hidden',
    'weight' => '5',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htab_access|node|book|form';
  $field_group->group_name = 'group_htab_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Workbench Access',
    'weight' => '6',
    'children' => array(
      0 => 'field_access_control',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-htab-access field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_htab_access|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_group|node|book|form';
  $field_group->group_name = 'group_sponsor_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_details';
  $field_group->data = array(
    'label' => 'Sponsors Info',
    'weight' => '9',
    'children' => array(
      0 => 'field_sponsor_byline',
      1 => 'field_show_sponsors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sponsors Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sponsor-group field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_sponsor_group|node|book|form'] = $field_group;

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
  $field_groups['group_tile_settings|field_collection_item|field_document_grid|form'] = $field_group;

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
  $field_groups['group_tile_settings|field_collection_item|field_tile|form'] = $field_group;

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
    'weight' => '8',
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
  $field_groups['group_tiles|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workbench|node|page|form';
  $field_group->group_name = 'group_workbench';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workbench Access',
    'weight' => '4',
    'children' => array(
      0 => 'field_access_control',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workbench field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_workbench|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional resources');
  t('Basic');
  t('Case');
  t('Case details');
  t('Case tiles');
  t('Collection details');
  t('Content');
  t('Credits');
  t('Document grid');
  t('Sponsors Info');
  t('Tile settings');
  t('Workbench Access');
  t('hidden');

  return $field_groups;
}
