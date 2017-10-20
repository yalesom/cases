<?php
/**
 * @file
 * raw_cases_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function raw_cases_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function raw_cases_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'square_thumbnail',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: tile-l.
  $styles['tile-l'] = array(
    'label' => 'tile-l',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tile-m.
  $styles['tile-m'] = array(
    'label' => 'tile-m',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tile-s.
  $styles['tile-s'] = array(
    'label' => 'tile-s',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tile-sq.
  $styles['tile-sq'] = array(
    'label' => 'tile-sq',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tile-xl.
  $styles['tile-xl'] = array(
    'label' => 'tile-xl',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function raw_cases_content_types_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => t('Start a new <em>Case study</em>. Be sure to select <create new book> in the <em>Book outline</em> section at the bottom of the page. '),
      'has_title' => '1',
      'title_label' => t('Case name'),
      'help' => '',
    ),
    'case_study_chapter_header' => array(
      'name' => t('Page - Chapter Header'),
      'base' => 'node_content',
      'description' => t('This is a page that will show it\'s title in navigation, but will ALWAYS forward to it\'s first child page. It has NO content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'html_for_modal' => array(
      'name' => t('HTML embed for modal'),
      'base' => 'node_content',
      'description' => t('HTML, including embed codes, that can be used as a page tile and model content. Example: YouTube Video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'infographic' => array(
      'name' => t('Infographic'),
      'base' => 'node_content',
      'description' => t('This is a non-interactive chart of info graphic that is an image format (jpeg, png, gif, etc). This is designed to display inside a "page modal".'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Create a <em>Page</em> to add to a case study. You must associate the page with a book in the <em>Book outline</em> menu at the bottom of the page. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_embed' => array(
      'name' => t('Video Embed'),
      'base' => 'node_content',
      'description' => t('Insert Video Assets for Modal\'s and Document Tiles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
