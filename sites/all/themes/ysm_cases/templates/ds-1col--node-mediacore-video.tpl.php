<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-mediacore-video <?php print $classes;?> clearfix">

<?php
	print '<div id="mediacore-video-' . $nid . '" class="mediacore-video-container tile-content">';

		print '<h3 class="modal-header">' . $title . '</h3>';

		// render the media core url (the video)
		print render($content['field_mediacore_url']);
		
	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>