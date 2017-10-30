<?php
/**
 * @file
 * raw_cases_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function raw_cases_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_contributor|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_contributor';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_contributor_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_contributor_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'b',
          'fi-cl' => 'name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_contributor|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_credits|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_credits';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'zeta',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_contributor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_credits|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_document_list|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_document_list';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'zeta',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_document_list|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_primary_image|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_primary_image';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_file_image_alt_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figcaption',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_primary_image|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_sponsor_byline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'This Yale School of Management case has been made possible by the generous support of ',
          'lb-el' => 'span',
          'lb-cl' => 'label',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'b',
          'fi-cl' => 'name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_credits' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_show_sponsors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'show-sponsors',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|book|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'tiles' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_sponsor_byline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'sponsor',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'b',
          'fi-cl' => 'name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_credits' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'credit',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_show_sponsors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'show-sponsor',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|book|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gallery|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gallery';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|gallery|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|highcharts|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'highcharts';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
    ),
  );
  $export['node|highcharts|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|highcharts|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'highcharts';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|highcharts|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'document_grid' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'resource_list' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_primary_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'document_grid' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'resource_list' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_primary_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function raw_cases_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'document_grid';
  $ds_field->label = 'Document grid';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|document_grid-document_grid',
    'block_render' => '3',
  );
  $export['document_grid'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'resource_list';
  $ds_field->label = 'Resource list';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|document_grid-document_list',
    'block_render' => '1',
  );
  $export['resource_list'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tiles';
  $ds_field->label = 'Tiles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|tiles-block',
    'block_render' => '3',
  );
  $export['tiles'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function raw_cases_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_contributor|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_contributor';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_contributor_name',
        1 => 'field_contributor_title',
      ),
    ),
    'fields' => array(
      'field_contributor_name' => 'ds_content',
      'field_contributor_title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_contributor|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_credits|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_credits';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_category',
        1 => 'field_contributor',
      ),
    ),
    'fields' => array(
      'field_category' => 'ds_content',
      'field_contributor' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_credits|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_document_item|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_document_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_documents_list',
        1 => 'field_page_url',
        2 => 'field_teaser',
        3 => 'field_file_image_title_text',
      ),
    ),
    'fields' => array(
      'field_documents_list' => 'ds_content',
      'field_page_url' => 'ds_content',
      'field_teaser' => 'ds_content',
      'field_file_image_title_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_document_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_document_list|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_document_list';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_category',
        1 => 'field_file_image_title_text',
        2 => 'field_page_url',
        3 => 'field_document_item',
      ),
    ),
    'fields' => array(
      'field_category' => 'ds_content',
      'field_file_image_title_text' => 'ds_content',
      'field_page_url' => 'ds_content',
      'field_document_item' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_document_list|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_primary_image|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_primary_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_file_image_alt_text',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_file_image_alt_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['field_collection_item|field_primary_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_tile',
        2 => 'field_sponsor_byline',
        3 => 'field_show_sponsors',
        4 => 'field_credits',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_tile' => 'ds_content',
      'field_sponsor_byline' => 'ds_content',
      'field_show_sponsors' => 'ds_content',
      'field_credits' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|book|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'tiles',
        1 => 'field_show_sponsors',
        2 => 'field_sponsor_byline',
        3 => 'field_credits',
      ),
    ),
    'fields' => array(
      'tiles' => 'ds_content',
      'field_show_sponsors' => 'ds_content',
      'field_sponsor_byline' => 'ds_content',
      'field_credits' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|book|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study_chapter_header|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study_chapter_header';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'domain',
        2 => 'field_access_control',
        3 => 'path',
        4 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'domain' => 'ds_content',
      'field_access_control' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|case_study_chapter_header|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_gallery_images',
        1 => 'field_transition_mode',
        2 => 'domain',
        3 => 'field_show_captions',
        4 => 'field_auto_play',
        5 => 'field_show_controls',
        6 => 'field_pause_on_hover',
        7 => 'field_transition_delay',
        8 => 'field_adaptive_height',
        9 => 'field_show_play_pause',
      ),
    ),
    'fields' => array(
      'field_gallery_images' => 'ds_content',
      'field_transition_mode' => 'ds_content',
      'domain' => 'ds_content',
      'field_show_captions' => 'ds_content',
      'field_auto_play' => 'ds_content',
      'field_show_controls' => 'ds_content',
      'field_pause_on_hover' => 'ds_content',
      'field_transition_delay' => 'ds_content',
      'field_adaptive_height' => 'ds_content',
      'field_show_play_pause' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|gallery|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gallery|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'field_auto_play',
        2 => 'field_show_controls',
        3 => 'field_show_captions',
        4 => 'field_pause_on_hover',
        5 => 'field_gallery_images',
        6 => 'field_transition_delay',
        7 => 'field_transition_mode',
        8 => 'field_show_play_pause',
        9 => 'field_adaptive_height',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'field_auto_play' => 'ds_content',
      'field_show_controls' => 'ds_content',
      'field_show_captions' => 'ds_content',
      'field_pause_on_hover' => 'ds_content',
      'field_gallery_images' => 'ds_content',
      'field_transition_delay' => 'ds_content',
      'field_transition_mode' => 'ds_content',
      'field_show_play_pause' => 'ds_content',
      'field_adaptive_height' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|gallery|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|highcharts|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'highcharts';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_subtitle',
        2 => 'field_chart_type',
        3 => 'field_src',
        4 => 'field_yaxis',
        5 => 'group_options',
        6 => 'field_stack_values',
        7 => 'field_show_data_labels',
        8 => 'field_chart_footnote',
        9 => 'field_show_legend',
        10 => 'field_enable_mouse_tracking',
        11 => 'field_show_tool_tip',
        12 => 'field_tool_tip_value',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_chart_type' => 'ds_content',
      'field_src' => 'ds_content',
      'field_yaxis' => 'ds_content',
      'group_options' => 'ds_content',
      'field_stack_values' => 'ds_content',
      'field_show_data_labels' => 'ds_content',
      'field_chart_footnote' => 'ds_content',
      'field_show_legend' => 'ds_content',
      'field_enable_mouse_tracking' => 'ds_content',
      'field_show_tool_tip' => 'ds_content',
      'field_tool_tip_value' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|highcharts|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|highcharts|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'highcharts';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_access_control',
        1 => 'title',
        2 => 'field_subtitle',
        3 => 'field_chart_type',
        4 => 'field_src',
        5 => 'field_yaxis',
        6 => 'field_show_data_labels',
        7 => 'field_show_legend',
        8 => 'field_enable_mouse_tracking',
        9 => 'field_show_tool_tip',
        10 => 'field_tool_tip_value',
        11 => 'field_stack_values',
        12 => 'path',
        13 => 'field_flags',
        14 => 'field_chart_footnote',
        15 => '_add_existing_field',
        16 => 'domain',
      ),
    ),
    'fields' => array(
      'field_access_control' => 'ds_content',
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_chart_type' => 'ds_content',
      'field_src' => 'ds_content',
      'field_yaxis' => 'ds_content',
      'field_show_data_labels' => 'ds_content',
      'field_show_legend' => 'ds_content',
      'field_enable_mouse_tracking' => 'ds_content',
      'field_show_tool_tip' => 'ds_content',
      'field_tool_tip_value' => 'ds_content',
      'field_stack_values' => 'ds_content',
      'path' => 'ds_content',
      'field_flags' => 'ds_content',
      'field_chart_footnote' => 'ds_content',
      '_add_existing_field' => 'ds_content',
      'domain' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|highcharts|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|highcharts|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'highcharts';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'field_subtitle',
        2 => 'field_chart_type',
        3 => 'field_yaxis',
        4 => 'field_src',
        5 => 'field_stack_values',
        6 => 'field_show_data_labels',
        7 => 'field_show_legend',
        8 => 'field_enable_mouse_tracking',
        9 => 'field_show_tool_tip',
        10 => 'field_tool_tip_value',
        11 => 'field_flags',
        12 => 'field_chart_footnote',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_chart_type' => 'ds_content',
      'field_yaxis' => 'ds_content',
      'field_src' => 'ds_content',
      'field_stack_values' => 'ds_content',
      'field_show_data_labels' => 'ds_content',
      'field_show_legend' => 'ds_content',
      'field_enable_mouse_tracking' => 'ds_content',
      'field_show_tool_tip' => 'ds_content',
      'field_tool_tip_value' => 'ds_content',
      'field_flags' => 'ds_content',
      'field_chart_footnote' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|highcharts|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|html_for_modal|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'html_for_modal';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_content',
        1 => 'domain',
      ),
    ),
    'fields' => array(
      'field_content' => 'ds_content',
      'domain' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|html_for_modal|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|infographic|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'infographic';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_scale_infographic_image',
        1 => 'field_infographic_image',
        2 => 'field_infographic_caption',
      ),
    ),
    'fields' => array(
      'field_scale_infographic_image' => 'ds_content',
      'field_infographic_image' => 'ds_content',
      'field_infographic_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|infographic|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_primary_image',
        1 => 'document_grid',
        2 => 'body',
        3 => 'field_case_term',
        4 => 'resource_list',
      ),
    ),
    'fields' => array(
      'field_primary_image' => 'ds_content',
      'document_grid' => 'ds_content',
      'body' => 'ds_content',
      'field_case_term' => 'ds_content',
      'resource_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_primary_image',
        1 => 'document_grid',
        2 => 'body',
        3 => 'resource_list',
      ),
    ),
    'fields' => array(
      'field_primary_image' => 'ds_content',
      'document_grid' => 'ds_content',
      'body' => 'ds_content',
      'resource_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => '%node:field_page_title',
    'hide_sidebars' => 0,
  );
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|video_embed|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'video_embed';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'domain',
        2 => 'field_warpwire_embed',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'domain' => 'ds_content',
      'field_warpwire_embed' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|video_embed|default'] = $ds_layout;

  return $export;
}
