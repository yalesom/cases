<div id="user-login-block-container">
  <div id="user-login-block-form-fields">
    <?php print $name; // Display username field ?>
    <?php print $pass; // Display Password field ?>
    <?php print $submit; // Display submit button ?>
    <?php print $rendered; // Display hidden elements (required for successful login) ?> 
  <?php 
	$url = $_SERVER['HTTP_HOST'];
	if (arg(0) == 'node' && is_numeric(arg(1))) { 
		$nodeid = arg(1); 
		print '<p>Yale students and faculty may also login with their NetID.</p>';
		print l('Login with NetID','https://secure.its.yale.edu/cas/login?service='.$url.'%2Fcas%3Fdestination%3Dnode%2F'.$nodeid); 
	};
	?>
  </div>
</div>
