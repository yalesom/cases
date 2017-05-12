<?php

function mytheme_preprocess_html(&$variables) {
  drupal_add_css('https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css', array('type' => 'external'));
  drupal_add_css($adminimal_path . 'assets/distribution/css/style-overrides.app.min.css', array('group' => CSS_THEME, 'media' => 'all', 'weight' => 100));
}

?>