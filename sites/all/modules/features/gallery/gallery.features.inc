<?php
/**
 * @file
 * gallery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Responsive image gallery that is designed to display within a "page modal" inside a case study. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('The images will stretch to fill the max width of the panel, which at it\'s largest size is 1024px wide.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
