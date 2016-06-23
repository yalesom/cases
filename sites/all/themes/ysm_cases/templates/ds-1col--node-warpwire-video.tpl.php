<?php
/**
 * @file
 * Display Suite 1 column template. Warpwire video embed
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-warpwire-video <?php print $classes;?> clearfix">

<?php
	print '<div id="warpwire-video-' . $nid . '" class="warpwire-video-container tile-content">';

		//print '<h3 class="modal-header">' . $title . '</h3>';

		// render the media core url (the video)
		print render($content['field_warpwire_embed']);
		
	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>