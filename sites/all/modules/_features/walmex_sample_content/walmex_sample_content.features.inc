<?php
/**
 * @file
 * walmex_sample_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function walmex_sample_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function walmex_sample_content_node_info() {
  $items = array(
    'case_study_chapter_header' => array(
      'name' => t('Case Study - Chapter Header'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'html_for_modal' => array(
      'name' => t('HTML for Modal'),
      'base' => 'node_content',
      'description' => t('HTML, including embed codes, that can be used as a page tile and model content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Case Study - Page'),
      'base' => 'node_content',
      'description' => t('Create a <em>Page</em> to add to a case study. You must associate the page with a book in the <em>Book outline</em> menu at the bottom of the page. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
