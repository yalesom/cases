<?php
/**
 * @file
 * walmex_sample_content.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function walmex_sample_content_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'intlinks title' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'intlinks_title_display_tip' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
