<?php
/**
 * @file
 * cases_anonymous_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cases_anonymous_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodeaccess'.
  $permissions['administer nodeaccess'] = array(
    'name' => 'administer nodeaccess',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create case_study_chapter_header content'.
  $permissions['create case_study_chapter_header content'] = array(
    'name' => 'create case_study_chapter_header content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create highcharts content'.
  $permissions['create highcharts content'] = array(
    'name' => 'create highcharts content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create html_for_modal content'.
  $permissions['create html_for_modal content'] = array(
    'name' => 'create html_for_modal content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create infographic content'.
  $permissions['create infographic content'] = array(
    'name' => 'create infographic content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mediacore_video content'.
  $permissions['create mediacore_video content'] = array(
    'name' => 'create mediacore_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create warpwire_video content'.
  $permissions['create warpwire_video content'] = array(
    'name' => 'create warpwire_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study_chapter_header content'.
  $permissions['delete any case_study_chapter_header content'] = array(
    'name' => 'delete any case_study_chapter_header content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any highcharts content'.
  $permissions['delete any highcharts content'] = array(
    'name' => 'delete any highcharts content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any html_for_modal content'.
  $permissions['delete any html_for_modal content'] = array(
    'name' => 'delete any html_for_modal content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any infographic content'.
  $permissions['delete any infographic content'] = array(
    'name' => 'delete any infographic content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mediacore_video content'.
  $permissions['delete any mediacore_video content'] = array(
    'name' => 'delete any mediacore_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any warpwire_video content'.
  $permissions['delete any warpwire_video content'] = array(
    'name' => 'delete any warpwire_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study_chapter_header content'.
  $permissions['delete own case_study_chapter_header content'] = array(
    'name' => 'delete own case_study_chapter_header content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery content'.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own highcharts content'.
  $permissions['delete own highcharts content'] = array(
    'name' => 'delete own highcharts content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own html_for_modal content'.
  $permissions['delete own html_for_modal content'] = array(
    'name' => 'delete own html_for_modal content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own infographic content'.
  $permissions['delete own infographic content'] = array(
    'name' => 'delete own infographic content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mediacore_video content'.
  $permissions['delete own mediacore_video content'] = array(
    'name' => 'delete own mediacore_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own warpwire_video content'.
  $permissions['delete own warpwire_video content'] = array(
    'name' => 'delete own warpwire_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study_chapter_header content'.
  $permissions['edit any case_study_chapter_header content'] = array(
    'name' => 'edit any case_study_chapter_header content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any highcharts content'.
  $permissions['edit any highcharts content'] = array(
    'name' => 'edit any highcharts content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any html_for_modal content'.
  $permissions['edit any html_for_modal content'] = array(
    'name' => 'edit any html_for_modal content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any infographic content'.
  $permissions['edit any infographic content'] = array(
    'name' => 'edit any infographic content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any mediacore_video content'.
  $permissions['edit any mediacore_video content'] = array(
    'name' => 'edit any mediacore_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any warpwire_video content'.
  $permissions['edit any warpwire_video content'] = array(
    'name' => 'edit any warpwire_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study_chapter_header content'.
  $permissions['edit own case_study_chapter_header content'] = array(
    'name' => 'edit own case_study_chapter_header content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery content'.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own highcharts content'.
  $permissions['edit own highcharts content'] = array(
    'name' => 'edit own highcharts content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own html_for_modal content'.
  $permissions['edit own html_for_modal content'] = array(
    'name' => 'edit own html_for_modal content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own infographic content'.
  $permissions['edit own infographic content'] = array(
    'name' => 'edit own infographic content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own mediacore_video content'.
  $permissions['edit own mediacore_video content'] = array(
    'name' => 'edit own mediacore_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own warpwire_video content'.
  $permissions['edit own warpwire_video content'] = array(
    'name' => 'edit own warpwire_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'grant deletable node permissions'.
  $permissions['grant deletable node permissions'] = array(
    'name' => 'grant deletable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant editable node permissions'.
  $permissions['grant editable node permissions'] = array(
    'name' => 'grant editable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant node permissions'.
  $permissions['grant node permissions'] = array(
    'name' => 'grant node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant own node permissions'.
  $permissions['grant own node permissions'] = array(
    'name' => 'grant own node permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'case editor' => 'case editor',
      'student editor' => 'student editor',
      'workshop editor' => 'workshop editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
