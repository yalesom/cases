<?php
/**
 * @file
 * raw_cases_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function raw_cases_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: case editor.
  $roles['case editor'] = array(
    'name' => 'case editor',
    'weight' => 3,
  );

  // Exported role: student editor.
  $roles['student editor'] = array(
    'name' => 'student editor',
    'weight' => 5,
  );

  // Exported role: workshop editor.
  $roles['workshop editor'] = array(
    'name' => 'workshop editor',
    'weight' => 4,
  );

  return $roles;
}
