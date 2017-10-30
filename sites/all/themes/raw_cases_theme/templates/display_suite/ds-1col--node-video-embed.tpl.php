<?php
/**
 * @file
 * Display Suite 1 column template. Video embed
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-video <?php print $classes;?> clearfix">

<?php
	print '<div id="video-' . $nid . '" class="video-container tile-content">';

		// render the media core url (the video)
		print render($content['field_video_embed']);

	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>
