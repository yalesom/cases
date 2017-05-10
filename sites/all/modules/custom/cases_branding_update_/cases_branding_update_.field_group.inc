<?php
/**
 * @file
 * cases_branding_update_.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cases_branding_update__field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branding|node|book|form';
  $field_group->group_name = 'group_branding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case';
  $field_group->data = array(
    'label' => 'Branding',
    'weight' => '16',
    'children' => array(
      0 => 'field_custom_logo',
      1 => 'field_bottom_content',
      2 => 'field_bottom_logo',
      3 => 'field_below_copyright_link',
      4 => 'field_below_copyright_logo',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-branding field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_branding|node|book|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Branding');

  return $field_groups;
}
