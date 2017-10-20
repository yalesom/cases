<?php
/**
 * @file
 * raw_cases_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function raw_cases_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_outline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book outline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case outline';
  $handler->display->display_options['css_class'] = 'case_menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['class'] = 'section';
  $handler->display->display_options['style_options']['main_field'] = 'nid';
  $handler->display->display_options['style_options']['parent_field'] = 'nid_1';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  /* Relationship: Book: Parent */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'book_parent';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Book: Hierarchy */
  $handler->display->display_options['sorts']['p']['id'] = 'p';
  $handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['p']['field'] = 'p';
  $handler->display->display_options['sorts']['p']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['p']['sort_within_level'] = 1;
  /* Sort criterion: Book: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Case outline */
  $handler = $view->new_display('block', 'Case outline', 'block');

  /* Display: Book outline */
  $handler = $view->new_display('block', 'Book outline', 'block_1');
  $handler->display->display_options['display_description'] = 'Book outline (clone)';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="scrolltoTop" href="#top"><i class="icon-angle-up"></i> Top of page</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'case_title';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => '',
      'class' => '',
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
  $handler->display->display_options['fields']['title']['relationship'] = 'bid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'block' => 'block',
    'block_1' => 'block_1',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $translatables['book_outline'] = array(
    t('Master'),
    t('Case outline'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Book'),
    t('Book parent'),
    t('All'),
    t('Book outline'),
    t('Book outline (clone)'),
    t('<a class="scrolltoTop" href="#top"><i class="icon-angle-up"></i> Top of page</a>'),
    t('Attachment'),
  );
  $export['book_outline'] = $view;

  $view = new view();
  $view->name = 'case_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case details';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
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
  /* Field: Content: Case number */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['label'] = '';
  $handler->display->display_options['fields']['field_case_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['alter']['text'] = 'Yale Case #[field_case_number]';
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
  /* Filter criterion: Content: Show Sponsors (field_show_sponsors) */
  $handler->display->display_options['filters']['field_show_sponsors_value']['id'] = 'field_show_sponsors_value';
  $handler->display->display_options['filters']['field_show_sponsors_value']['table'] = 'field_data_field_show_sponsors';
  $handler->display->display_options['filters']['field_show_sponsors_value']['field'] = 'field_show_sponsors_value';
  $handler->display->display_options['filters']['field_show_sponsors_value']['relationship'] = 'bid';
  $handler->display->display_options['filters']['field_show_sponsors_value']['value'] = array(
    1 => '1',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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

  /* Display: Header block */
  $handler = $view->new_display('block', 'Header block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_case_subtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_case_subtitle']['hide_empty'] = TRUE;
  /* Field: Content: Case number */
  $handler->display->display_options['fields']['field_case_number']['id'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['table'] = 'field_data_field_case_number';
  $handler->display->display_options['fields']['field_case_number']['field'] = 'field_case_number';
  $handler->display->display_options['fields']['field_case_number']['label'] = '';
  $handler->display->display_options['fields']['field_case_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['alter']['text'] = 'Yale School of Management Case Study #[field_case_number]';
  $handler->display->display_options['fields']['field_case_number']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_case_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Sponsors */
  $handler = $view->new_display('block', 'Sponsors', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'case_sponsors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_sponsor_byline' => array(
      'element_type' => '',
      'class' => '',
      'label_element_type' => 'span',
      'label_class' => 'label',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sponsor byline */
  $handler->display->display_options['fields']['field_sponsor_byline']['id'] = 'field_sponsor_byline';
  $handler->display->display_options['fields']['field_sponsor_byline']['table'] = 'field_data_field_sponsor_byline';
  $handler->display->display_options['fields']['field_sponsor_byline']['field'] = 'field_sponsor_byline';
  $handler->display->display_options['fields']['field_sponsor_byline']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_byline']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor_byline']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_sponsor_byline']['separator'] = '';
  $translatables['case_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Book'),
    t('Yale Case #[field_case_number]'),
    t('Updated'),
    t('Published'),
    t('All'),
    t('Footer block'),
    t('Header block'),
    t('Yale School of Management Case Study #[field_case_number]'),
    t('Abstract'),
    t('field_tile'),
    t('Sponsors'),
  );
  $export['case_details'] = $view;

  $view = new view();
  $view->name = 'document_grid';
  $view->description = 'Multiple views for documents and links associated with a page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page assets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'document-tiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'nothing' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  /* Relationship: Content: Document grid (field_document_grid) */
  $handler->display->display_options['relationships']['field_document_grid_value']['id'] = 'field_document_grid_value';
  $handler->display->display_options['relationships']['field_document_grid_value']['table'] = 'field_data_field_document_grid';
  $handler->display->display_options['relationships']['field_document_grid_value']['field'] = 'field_document_grid_value';
  $handler->display->display_options['relationships']['field_document_grid_value']['label'] = 'Document_grid';
  $handler->display->display_options['relationships']['field_document_grid_value']['delta'] = '-1';
  /* Field: Field collection item: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_color';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = 'yale';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = '[field_color]';
  /* Field: Field collection item: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Field collection item: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Page URL */
  $handler->display->display_options['fields']['field_page_url']['id'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['table'] = 'field_data_field_page_url';
  $handler->display->display_options['fields']['field_page_url']['field'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_page_url']['label'] = '';
  $handler->display->display_options['fields']['field_page_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_url']['alter']['text'] = '<a href="[field_page_url-url]" class="button [field_color] [views_conditional_4]">[field_page_url-title]</a>';
  $handler->display->display_options['fields']['field_page_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_page_url']['type'] = 'link_plain';
  /* Field: Field collection item: Document */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_document']['label'] = '';
  $handler->display->display_options['fields']['field_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document']['type'] = 'file_url_plain';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_document';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_document]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_page_url]';
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tile-sq',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tile">
<div class="tile-wrap [views_conditional_4]">
<a href="[views_conditional]" target="_blank">
<span class="img">
<img src="[field_image]"/>
<i class="[field_icon]"></i>
</span>
<span class="text">
<span class="header zeta">[field_headline]</span>
</span>
<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>
</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
  /* Filter criterion: Content: Document grid (field_document_grid) */
  $handler->display->display_options['filters']['field_document_grid_value']['id'] = 'field_document_grid_value';
  $handler->display->display_options['filters']['field_document_grid_value']['table'] = 'field_data_field_document_grid';
  $handler->display->display_options['filters']['field_document_grid_value']['field'] = 'field_document_grid_value';
  $handler->display->display_options['filters']['field_document_grid_value']['operator'] = 'not empty';

  /* Display: Document grid */
  $handler = $view->new_display('block', 'Document grid', 'document_grid');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'nothing' => array(
      'element_type' => '',
      'class' => 'dg',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_color';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = 'yale';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = '[field_color]';
  /* Field: Field collection item: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Field collection item: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Page URL */
  $handler->display->display_options['fields']['field_page_url']['id'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['table'] = 'field_data_field_page_url';
  $handler->display->display_options['fields']['field_page_url']['field'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_page_url']['label'] = '';
  $handler->display->display_options['fields']['field_page_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_url']['alter']['text'] = '<a href="[field_page_url-url]" class="button [field_color] [views_conditional_4]">[field_page_url-title]</a>';
  $handler->display->display_options['fields']['field_page_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_page_url']['type'] = 'link_plain';
  /* Field: Field collection item: Document */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_document']['label'] = '';
  $handler->display->display_options['fields']['field_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document']['type'] = 'file_url_plain';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_document';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_document]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_page_url]';
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_document_grid_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tile-sq',
    'image_link' => '',
  );
  /* Field: Content: Grid Columns */
  $handler->display->display_options['fields']['field_grid_columns']['id'] = 'field_grid_columns';
  $handler->display->display_options['fields']['field_grid_columns']['table'] = 'field_data_field_grid_columns';
  $handler->display->display_options['fields']['field_grid_columns']['field'] = 'field_grid_columns';
  $handler->display->display_options['fields']['field_grid_columns']['label'] = '';
  $handler->display->display_options['fields']['field_grid_columns']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_grid_columns']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grid_columns']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tile [field_grid_columns]">
<div class="tile-wrap [views_conditional_4]">
<a href="[views_conditional]" target="_blank">
<span class="img">
<img src="[field_image]"/>
<i class="[field_icon]"></i>
</span>
<span class="text">
<span class="header zeta">[field_headline]</span>
</span>
<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>
</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Document list */
  $handler = $view->new_display('block', 'Document list', 'document_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'document-list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['group']['class'] = 'zeta';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'item-list nav nav--stacked';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['class'] = 'item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_file_image_title_text' => array(
      'element_type' => '',
      'class' => '',
    ),
    'extension' => array(
      'element_type' => 'span',
      'class' => 'filetype',
    ),
    'filesize' => array(
      'element_type' => 'span',
      'class' => 'filesize',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Document list (field_document_list) */
  $handler->display->display_options['relationships']['field_document_list_value']['id'] = 'field_document_list_value';
  $handler->display->display_options['relationships']['field_document_list_value']['table'] = 'field_data_field_document_list';
  $handler->display->display_options['relationships']['field_document_list_value']['field'] = 'field_document_list_value';
  $handler->display->display_options['relationships']['field_document_list_value']['label'] = 'Document_list';
  $handler->display->display_options['relationships']['field_document_list_value']['delta'] = '-1';
  /* Relationship: Field collection item: Item (field_document_item) */
  $handler->display->display_options['relationships']['field_document_item_value']['id'] = 'field_document_item_value';
  $handler->display->display_options['relationships']['field_document_item_value']['table'] = 'field_data_field_document_item';
  $handler->display->display_options['relationships']['field_document_item_value']['field'] = 'field_document_item_value';
  $handler->display->display_options['relationships']['field_document_item_value']['relationship'] = 'field_document_list_value';
  $handler->display->display_options['relationships']['field_document_item_value']['label'] = 'Document_item';
  $handler->display->display_options['relationships']['field_document_item_value']['delta'] = '-1';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Relationship: Field collection item: Document (field_documents_list:fid) */
  $handler->display->display_options['relationships']['field_documents_list_fid']['id'] = 'field_documents_list_fid';
  $handler->display->display_options['relationships']['field_documents_list_fid']['table'] = 'field_data_field_documents_list';
  $handler->display->display_options['relationships']['field_documents_list_fid']['field'] = 'field_documents_list_fid';
  $handler->display->display_options['relationships']['field_documents_list_fid']['relationship'] = 'field_document_item_value';
  $handler->display->display_options['relationships']['field_documents_list_fid']['label'] = 'Documents_file';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Document */
  $handler->display->display_options['fields']['field_documents_list']['id'] = 'field_documents_list';
  $handler->display->display_options['fields']['field_documents_list']['table'] = 'field_data_field_documents_list';
  $handler->display->display_options['fields']['field_documents_list']['field'] = 'field_documents_list';
  $handler->display->display_options['fields']['field_documents_list']['relationship'] = 'field_document_item_value';
  $handler->display->display_options['fields']['field_documents_list']['label'] = '';
  $handler->display->display_options['fields']['field_documents_list']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documents_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documents_list']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documents_list']['type'] = 'file_url_plain';
  /* Field: Field collection item: Page URL */
  $handler->display->display_options['fields']['field_page_url']['id'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['table'] = 'field_data_field_page_url';
  $handler->display->display_options['fields']['field_page_url']['field'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['relationship'] = 'field_document_item_value';
  $handler->display->display_options['fields']['field_page_url']['label'] = '';
  $handler->display->display_options['fields']['field_page_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_page_url']['type'] = 'link_absolute';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_documents_list';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_documents_list]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_page_url]';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_documents_list';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'icon-file';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'icon-external-link';
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_document_item_value';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['text'] = '<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['hide_empty'] = TRUE;
  /* Field: Field: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_document_item_value';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['text'] = '<i class="[views_conditional_1]"></i>[field_file_image_title_text] [field_teaser]';
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['path'] = '[views_conditional]';
  $handler->display->display_options['fields']['field_file_image_title_text']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['relationship'] = 'field_documents_list_fid';
  $handler->display->display_options['fields']['extension']['label'] = '';
  $handler->display->display_options['fields']['extension']['element_label_colon'] = FALSE;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_documents_list_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['filesize']['alter']['text'] = '([filesize])';
  $handler->display->display_options['fields']['filesize']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Collection name */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'field_document_list_value';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Document list (field_document_list) */
  $handler->display->display_options['filters']['field_document_list_value']['id'] = 'field_document_list_value';
  $handler->display->display_options['filters']['field_document_list_value']['table'] = 'field_data_field_document_list';
  $handler->display->display_options['filters']['field_document_list_value']['field'] = 'field_document_list_value';
  $handler->display->display_options['filters']['field_document_list_value']['operator'] = 'not empty';
  $translatables['document_grid'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Document_grid'),
    t('<a href="[field_page_url-url]" class="button [field_color] [views_conditional_4]">[field_page_url-title]</a>'),
    t('<div class="tile">
<div class="tile-wrap [views_conditional_4]">
<a href="[views_conditional]" target="_blank">
<span class="img">
<img src="[field_image]"/>
<i class="[field_icon]"></i>
</span>
<span class="text">
<span class="header zeta">[field_headline]</span>
</span>
<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>
</a>
</div>
</div>'),
    t('All'),
    t('Document grid'),
    t('<div class="tile [field_grid_columns]">
<div class="tile-wrap [views_conditional_4]">
<a href="[views_conditional]" target="_blank">
<span class="img">
<img src="[field_image]"/>
<i class="[field_icon]"></i>
</span>
<span class="text">
<span class="header zeta">[field_headline]</span>
</span>
<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>
</a>
</div>
</div>'),
    t('Document list'),
    t('Document_list'),
    t('Document_item'),
    t('File'),
    t('Documents_file'),
    t('<span class="tooltip"><span class="tooltext">[field_teaser]</span></span>'),
    t('<i class="[views_conditional_1]"></i>[field_file_image_title_text] [field_teaser]'),
    t('([filesize])'),
  );
  $export['document_grid'] = $view;

  $view = new view();
  $view->name = 'tiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'case-tiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'views_conditional' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'nothing' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  /* Relationship: Content: Tile (field_tile) */
  $handler->display->display_options['relationships']['field_tile_value']['id'] = 'field_tile_value';
  $handler->display->display_options['relationships']['field_tile_value']['table'] = 'field_data_field_tile';
  $handler->display->display_options['relationships']['field_tile_value']['field'] = 'field_tile_value';
  $handler->display->display_options['relationships']['field_tile_value']['relationship'] = 'bid';
  $handler->display->display_options['relationships']['field_tile_value']['delta'] = '-1';
  /* Field: Field collection item: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_color';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '6';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '[field_color] ';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = 'yale';
  /* Field: Field collection item: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline']['type'] = 'text_plain';
  /* Field: Field collection item: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Page URL */
  $handler->display->display_options['fields']['field_page_url']['id'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['table'] = 'field_data_field_page_url';
  $handler->display->display_options['fields']['field_page_url']['field'] = 'field_page_url';
  $handler->display->display_options['fields']['field_page_url']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_page_url']['label'] = '';
  $handler->display->display_options['fields']['field_page_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_page_url']['alter']['text'] = '<a href="[field_page_url-url]" class="button [field_color] [views_conditional_4]">[field_page_url-title]</a>';
  $handler->display->display_options['fields']['field_page_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_page_url']['type'] = 'link_separate';
  /* Field: Field collection item: Size */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'field_data_field_size';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_size']['type'] = 'list_key';
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tile-xl',
    'image_link' => '',
  );
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'tile-l',
    'image_link' => '',
  );
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image_2']['id'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_2']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_2']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_2']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_2']['settings'] = array(
    'image_style' => 'tile-m',
    'image_link' => '',
  );
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_image_3']['id'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_3']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_3']['relationship'] = 'field_tile_value';
  $handler->display->display_options['fields']['field_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_image_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_3']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_3']['settings'] = array(
    'image_style' => 'tile-s',
    'image_link' => '',
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_size';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'xlarge';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_image]';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_size';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'large';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[field_image_1]';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_size';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'medium';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[field_image_2]';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_size';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'small';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_image_3]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tile [field_size]">
<div class="tile-wrap">
<div class="img [views_conditional_4]"><img src="[views_conditional][views_conditional_1][views_conditional_2][views_conditional_3]"/><i class="[field_icon]"></i></div>
<div class="text"><h3 class="header delta">[field_headline]</h3><p class="teaser">[field_teaser]</p>[field_page_url]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Tile (field_tile:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_tile';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'bid';
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

  /* Display: Tile blocks */
  $handler = $view->new_display('block', 'Tile blocks', 'block');
  $translatables['tiles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Book'),
    t('field collection item from field_tile'),
    t('<a href="[field_page_url-url]" class="button [field_color] [views_conditional_4]">[field_page_url-title]</a>'),
    t('<div class="tile [field_size]">
<div class="tile-wrap">
<div class="img [views_conditional_4]"><img src="[views_conditional][views_conditional_1][views_conditional_2][views_conditional_3]"/><i class="[field_icon]"></i></div>
<div class="text"><h3 class="header delta">[field_headline]</h3><p class="teaser">[field_teaser]</p>[field_page_url]</div>
</div>
</div>'),
    t('All'),
    t('Tile blocks'),
  );
  $export['tiles'] = $view;

  return $export;
}
