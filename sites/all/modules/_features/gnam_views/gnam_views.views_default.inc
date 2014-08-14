<?php
/**
 * @file
 * gnam_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gnam_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gnam_case_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GNAM Case Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'case_details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_produced_by',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_case_number' => array(
      'element_type' => 'div',
      'class' => 'case-num',
    ),
    'field_updated' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
    'field_publish_date' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
  );
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  /* Field: Content: Global Network Case */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['label'] = '';
  $handler->display->display_options['fields']['field_case_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['alter']['text'] = 'Global Network Case [field_case_number]';
  $handler->display->display_options['fields']['field_case_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['element_label_colon'] = FALSE;
  /* Field: Content: Updated */
  $handler->display->display_options['fields']['field_updated']['id'] = 'field_updated';
  $handler->display->display_options['fields']['field_updated']['table'] = 'field_data_field_updated';
  $handler->display->display_options['fields']['field_updated']['field'] = 'field_updated';
  $handler->display->display_options['fields']['field_updated']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_updated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_updated']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = 'Published';
  $handler->display->display_options['fields']['field_publish_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'bid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'book_root';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );

  /* Display: Footer block */
  $handler = $view->new_display('block', 'Footer block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_case_number' => array(
      'element_type' => 'div',
      'class' => 'case-num',
    ),
    'field_updated' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
    'field_publish_date' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Global Network Case */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['alter']['text'] = '[field_case_number]';
  $handler->display->display_options['fields']['field_case_number']['alter']['trim_whitespace'] = TRUE;
  /* Field: Content: Updated */
  $handler->display->display_options['fields']['field_updated']['id'] = 'field_updated';
  $handler->display->display_options['fields']['field_updated']['table'] = 'field_data_field_updated';
  $handler->display->display_options['fields']['field_updated']['field'] = 'field_updated';
  $handler->display->display_options['fields']['field_updated']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_updated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_updated']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_publish_date']['id'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['table'] = 'field_data_field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['field'] = 'field_publish_date';
  $handler->display->display_options['fields']['field_publish_date']['label'] = 'Published';
  $handler->display->display_options['fields']['field_publish_date']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_publish_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publish_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );

  /* Display: Header block */
  $handler = $view->new_display('block', 'Header block', 'block_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['group']['element_type'] = '';
  $handler->display->display_options['style_options']['group']['class'] = '';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'nothing' => array(
      'element_type' => 'i',
      'class' => 'icon-reorder',
    ),
    'title' => array(
      'element_type' => 'h1',
      'class' => 'case-name delta',
    ),
    'field_case_subtitle' => array(
      'element_type' => 'div',
      'class' => 'case-subtitle',
    ),
    'field_case_number' => array(
      'element_type' => 'div',
      'class' => 'case-num',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Case Subtitle */
  $handler->display->display_options['fields']['field_case_subtitle']['id'] = 'field_case_subtitle';
  $handler->display->display_options['fields']['field_case_subtitle']['table'] = 'field_data_field_case_subtitle';
  $handler->display->display_options['fields']['field_case_subtitle']['field'] = 'field_case_subtitle';
  $handler->display->display_options['fields']['field_case_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_case_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_subtitle']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Content: Global Network Case */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['label'] = '';
  $handler->display->display_options['fields']['field_case_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['alter']['text'] = 'Global Network Case [field_case_number]';
  $handler->display->display_options['fields']['field_case_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_number']['group_columns'] = array(
    'value' => 'value',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'bid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'book_root';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Abstract */
  $handler = $view->new_display('block', 'Abstract', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Abstract';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'case_abstract';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'body_1' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Tile (field_tile) */
  $handler->display->display_options['relationships']['field_tile_value']['id'] = 'field_tile_value';
  $handler->display->display_options['relationships']['field_tile_value']['table'] = 'field_data_field_tile';
  $handler->display->display_options['relationships']['field_tile_value']['field'] = 'field_tile_value';
  $handler->display->display_options['relationships']['field_tile_value']['label'] = 'field_tile';
  $handler->display->display_options['relationships']['field_tile_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tile-m',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Disclaimer */
  $handler = $view->new_display('block', 'Disclaimer', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Disclaimer */
  $handler->display->display_options['fields']['field_disclaimer']['id'] = 'field_disclaimer';
  $handler->display->display_options['fields']['field_disclaimer']['table'] = 'field_data_field_disclaimer';
  $handler->display->display_options['fields']['field_disclaimer']['field'] = 'field_disclaimer';
  $handler->display->display_options['fields']['field_disclaimer']['label'] = '';
  $handler->display->display_options['fields']['field_disclaimer']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_disclaimer']['element_class'] = 'disclaimer';
  $handler->display->display_options['fields']['field_disclaimer']['element_label_colon'] = FALSE;

  /* Display: Produced By Logos */
  $handler = $view->new_display('block', 'Produced By Logos', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'produced-by-collection';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_case_number' => array(
      'element_type' => 'div',
      'class' => 'case-num',
    ),
    'field_updated' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
    'field_publish_date' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  /* Relationship: Content: Produced By (field_produced_by) */
  $handler->display->display_options['relationships']['field_produced_by_value']['id'] = 'field_produced_by_value';
  $handler->display->display_options['relationships']['field_produced_by_value']['table'] = 'field_data_field_produced_by';
  $handler->display->display_options['relationships']['field_produced_by_value']['field'] = 'field_produced_by_value';
  $handler->display->display_options['relationships']['field_produced_by_value']['relationship'] = 'bid';
  $handler->display->display_options['relationships']['field_produced_by_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Logo */
  $handler->display->display_options['fields']['field_produced_by_logo']['id'] = 'field_produced_by_logo';
  $handler->display->display_options['fields']['field_produced_by_logo']['table'] = 'field_data_field_produced_by_logo';
  $handler->display->display_options['fields']['field_produced_by_logo']['field'] = 'field_produced_by_logo';
  $handler->display->display_options['fields']['field_produced_by_logo']['relationship'] = 'field_produced_by_value';
  $handler->display->display_options['fields']['field_produced_by_logo']['label'] = '';
  $handler->display->display_options['fields']['field_produced_by_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produced_by_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produced_by_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_produced_by_logo']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_produced_by_logo']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_produced_by_name']['id'] = 'field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['table'] = 'field_data_field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['field'] = 'field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['relationship'] = 'field_produced_by_value';
  $handler->display->display_options['fields']['field_produced_by_name']['label'] = '';
  $handler->display->display_options['fields']['field_produced_by_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produced_by_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_produced_by_url']['id'] = 'field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['table'] = 'field_data_field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['field'] = 'field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['relationship'] = 'field_produced_by_value';
  $handler->display->display_options['fields']['field_produced_by_url']['label'] = '';
  $handler->display->display_options['fields']['field_produced_by_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produced_by_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produced_by_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_produced_by_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="produced-by-info">
<a href="[field_produced_by_url]" target="_blank" title="[field_produced_by_name]"><img class="logo" src="[field_produced_by_logo]" alt="[field_produced_by_name]" /></a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Produced By Names */
  $handler = $view->new_display('block', 'Produced By Names', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'produced-by-collection-names';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_case_number' => array(
      'element_type' => 'div',
      'class' => 'case-num',
    ),
    'field_updated' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
    'field_publish_date' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'label',
      'label_class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  /* Relationship: Content: Produced By (field_produced_by) */
  $handler->display->display_options['relationships']['field_produced_by_value']['id'] = 'field_produced_by_value';
  $handler->display->display_options['relationships']['field_produced_by_value']['table'] = 'field_data_field_produced_by';
  $handler->display->display_options['relationships']['field_produced_by_value']['field'] = 'field_produced_by_value';
  $handler->display->display_options['relationships']['field_produced_by_value']['relationship'] = 'bid';
  $handler->display->display_options['relationships']['field_produced_by_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_produced_by_name']['id'] = 'field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['table'] = 'field_data_field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['field'] = 'field_produced_by_name';
  $handler->display->display_options['fields']['field_produced_by_name']['relationship'] = 'field_produced_by_value';
  $handler->display->display_options['fields']['field_produced_by_name']['label'] = '';
  $handler->display->display_options['fields']['field_produced_by_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produced_by_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_produced_by_url']['id'] = 'field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['table'] = 'field_data_field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['field'] = 'field_produced_by_url';
  $handler->display->display_options['fields']['field_produced_by_url']['relationship'] = 'field_produced_by_value';
  $handler->display->display_options['fields']['field_produced_by_url']['label'] = '';
  $handler->display->display_options['fields']['field_produced_by_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produced_by_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produced_by_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_produced_by_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_produced_by_url]" target="_blank" title="[field_produced_by_name]">[field_produced_by_name]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['gnam_case_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Book'),
    t('Global Network Case [field_case_number]'),
    t('Updated'),
    t('Published'),
    t('All'),
    t('Footer block'),
    t('Global Network Case'),
    t('[field_case_number]'),
    t('Header block'),
    t('Abstract'),
    t('field_tile'),
    t('Disclaimer'),
    t('Produced By Logos'),
    t('field collection item from field_produced_by'),
    t('<div class="produced-by-info">
<a href="[field_produced_by_url]" target="_blank" title="[field_produced_by_name]"><img class="logo" src="[field_produced_by_logo]" alt="[field_produced_by_name]" /></a>
</div>'),
    t('Produced By Names'),
    t('<a href="[field_produced_by_url]" target="_blank" title="[field_produced_by_name]">[field_produced_by_name]</a>'),
  );
  $export['gnam_case_details'] = $view;

  return $export;
}
