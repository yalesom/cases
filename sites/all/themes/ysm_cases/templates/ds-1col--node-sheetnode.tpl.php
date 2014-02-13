<?php
/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-sheetnode <?php print $classes;?> clearfix">

<?php
	print '<div id="sn-container-' . $nid . '" class="sheetnode-container tile-content" data-nid=' . $nid . '>';

		print '<h3 class="modal-header">' . $title . '</h3>';

		print $content['sheetnode']['#markup'];

		print '<div style="display:none;" id="sheetnode-value">';
			print $node->sheetnode['value'];
		print '</div>';

		//Export links
		print '<div class="sheetnode-export-links">';
		print '<a style="xls-download" href="/sheetnode/xls/' . $nid . ' " target="_blank">download XLS</a>';
		print '<a style="csv-download" href="/sheetnode/csv/' . $nid . ' " target="_blank">download CSV</a>';
		print '</div>';

	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>