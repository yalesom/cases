<?php
/**
 * @file
 * cases_anonymous_permissions.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cases_anonymous_permissions_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Disclaimer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'disclaimer';
  $fe_block_boxes->body = '<p>&nbsp;</p><p>Help us improve our web site&#39;s performance.&nbsp; If you experience an issue, <a href="mailto:case.comments@yale.edu?subject=Case%20Study%20web%20site%20issue">please contact us</a> with a description, the page where it occurred, and your operating system and browser version.</p><p>This web site has been developed by the Yale School of Management. This case has been developed for pedagogical purposes from published sources. The case is not intended to furnish primary data, serve as an endorsement of the organization in question, or illustrate either effective or ineffective management techniques or strategies. No part of this site (including articles, maps and videos) should be posted to another web site or e-mailed to anyone. This stipulation will be strictly enforced.</p><p>We welcome your comments and questions. Please email us at <a href="mailto:case.comments@yale.edu">case.comments@yale.edu</a>.</p>';

  $export['disclaimer'] = $fe_block_boxes;

  return $export;
}
