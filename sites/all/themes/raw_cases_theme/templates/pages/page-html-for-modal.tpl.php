<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-html-embedded-content <?php print $classes;?> clearfix">

<?php
	print '<div id="html-embedded-content-' . $nid . '" class="html-embedded-content-container tile-content">';
	print render($content['field_content'][0]);

	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
