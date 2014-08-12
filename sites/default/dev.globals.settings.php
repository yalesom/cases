<?php

// Settings that must apply to all 'dev' environments, basically anything that isn't
// production. Don't put the database connection string in here, rather use the
// local.settings.php file for that.

// General caching switched off.
$conf['preprocess_js'] = 0;
$conf['preprocess_css'] = 0;

# Switch on error display
$conf['error_level'] = 1;

# Turn on local email handling
#$conf['mail_system'] = array( 'default-system' => 'DevelMailLog' );
