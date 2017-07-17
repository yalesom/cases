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
		// Warpwire Video Date and Location logic
		$date = null;
		$location = null;
		if (array_key_exists('field_video_month' , $content)) {
			$date = $content['field_video_month'][0]['#markup'];
		}
		if (array_key_exists('field_video_day' , $content)) {
			$date .= ' ' . $content['field_video_day'][0]['#markup'];
		}
		if (array_key_exists('field_video_year' , $content)) {
			$date .= ' ' .substr($content['field_video_year'][0]['#markup'] , 0 , 4);
		}
		if (array_key_exists('field_video_location' , $content)) {
			$location = ' ' . $content['field_video_location'][0]['#markup'];
		}
		if ((isset($date)) && isset($location)) {
			$dash = ' - ';
		} else {
			$dash = '';
		}
		print "<i> $date $dash $location </i>";

	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>
