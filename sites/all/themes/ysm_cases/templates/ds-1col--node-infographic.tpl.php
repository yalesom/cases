<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-infographic <?php print $classes;?> clearfix">

<?php
	print '<div id="infographic-' . $nid . '" class="infographic-container tile-content">';

		//print '<h3 class="modal-header">' . $title . '</h3>';

		print '<img src="' . file_create_url($node->field_infographic_image['und'][0]['uri']) .'" ';

		if(render($content['field_scale_infographic_image'][0]) == 'true') { print 'class="scaled"'; };

		print '/>';
		
		print '<div class="infographic-caption">' . render($content['field_infographic_caption'][0]) . '</div>';

	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>