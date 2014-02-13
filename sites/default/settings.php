<?php

// Put settings into the right place - if you're starting out developing and
// want to add database settings, make a copy of `example.settings.php` and
// call it `local.settings.php`, and add your database info in there.

// Include all the default Drupal settings first, then override them based on
// environment below.
require_once 'core.settings.php';

// Global settings that apply regardless of environment.
require_once 'globals.settings.php';

// If the production settings file is available, then we're in the prod environment,
// so we use that for all remaining settings. This file is *not* checked into the
// git repo, as it contains settings for the live DB.
if (file_exists('sites/default/prod.settings.php')) {
  require_once 'prod.settings.php';
}
else {
  // This isn't production, so include settings that should apply to all 'dev'
  // environments, these include more global variables and such. This file is
  // checked into the repo, so no sensitive info in here.
  require_once 'dev.globals.settings.php';

  // Local settings contain the database connection or any other similar settings
  // and can override any of the above easily.
  require_once 'local.settings.php';
}

/**
 * Add the domain module setup routine if we're not in a drush runtime.
 *
 * NOTE: this conditional is present because drush sql commands have issues
 * bootstrapping when domain settings are included, but other drush commands
 * have issues if the domain settings are not included. ಠ_ಠ
 */
if (!isset($_SERVER['SCRIPT_FILENAME']) || strpos($_SERVER['SCRIPT_FILENAME'], 'drush.php') === FALSE || strpos(implode(' ', $_SERVER['argv']), 'sql-') === FALSE) {
  include DRUPAL_ROOT . '/sites/all/modules/domain/settings.inc';
}

