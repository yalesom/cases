<?php
/**
 * @file
 * cases_branding_update_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cases_branding_update__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
