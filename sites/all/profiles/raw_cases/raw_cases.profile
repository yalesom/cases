<?php
/**
 * Implements hook_install_tasks().
 */
// function raw_cases_install_tasks($install_state) {
//
//   return $tasks;
// }

/**
 * Implements hook_form_FORM_ID_alter().
 */
function raw_cases_form_install_configure_form_alter(&$form, $form_state) {
 // Pre-populate the site name with the server name.
 $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}
?>
