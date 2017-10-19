<div id="user-login-block-container">
<?php
  $showAnonymous = FALSE;
  if (arg(0) == 'node' && is_numeric(arg(1)) && !user_is_logged_in()) {
    $node = node_load(arg(1));
    if (isset($node)) {
      $showAnonymous = _get_nodeaccess($node);
    }
  }
?>
<?php if (!$showAnonymous): ?>
    <div id="user-login-block-form-fields">
      <?php print $name; // Display username field ?>
      <?php print $pass; // Display Password field ?>
      <?php print $submit; // Display submit button ?>
      <?php print $rendered; // Display hidden elements (required for successful login) ?>
    </div>
  </div>
<?php endif; ?>
