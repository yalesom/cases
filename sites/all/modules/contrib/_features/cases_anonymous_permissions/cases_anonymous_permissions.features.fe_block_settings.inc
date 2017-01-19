<?php
/**
 * @file
 * cases_anonymous_permissions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cases_anonymous_permissions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-book_outline-block'] = array(
    'cache' => -1,
    'css_class' => 'hide-title',
    'custom' => 0,
    'delta' => 'book_outline-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'anonymous user' => 1,
      'authenticated user' => 2,
      'case editor' => 4,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -11,
      ),
      'adminimal_cases' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 6,
      ),
      'ysm_cases' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-book_outline-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'book_outline-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'anonymous user' => 1,
      'authenticated user' => 2,
      'case editor' => 4,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'adminimal_cases' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 5,
      ),
      'ysm_cases' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => -17,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-case_details-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'case_details-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'book',
      1 => 'case_study_chapter_header',
      2 => 'page',
    ),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
      'authenticated user' => 2,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -18,
      ),
      'adminimal_cases' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 8,
      ),
      'ysm_cases' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_details-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'case_details-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'adminimal_cases' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 9,
      ),
      'ysm_cases' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-case_details-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'case_details-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'adminimal_cases' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 7,
      ),
      'ysm_cases' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => -17,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-case_details-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'case_details-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'anonymous user' => 1,
      'authenticated user' => 2,
      'case editor' => 4,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -15,
      ),
      'adminimal_cases' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adminimal_cases',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'ysm_cases' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'ysm_cases',
        'weight' => -15,
      ),
    ),
    'title' => 'case details',
    'visibility' => 0,
  );

  return $export;
}
