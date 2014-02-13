<?php

/**
 * @file
 * Display Suite 1 column Highcharts template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-highcharts <?php print $classes;?> clearfix">

<script>
jQuery(document).ready(function($) {
	chartContainer = jQuery('#chart-container');
	readInChartCSV();
});
</script>

<?
	print '<div id="chart-container" '; 
	foreach($content as $f => $f_value) {
		if (strpos($f, 'field_') !== false && strpos($f, '_src') == false) {
			print 'data-' . str_replace('field', '', str_replace('_', '', strtolower($f))) . '="' . render($content[$f][0]) . '" ';
		}
	}
	print 'data-title="' . $title . '" ';
	print 'data-src="/sites/default/files/' . $node->field_src['und'][0]['filename'] . '"></div>';
?>

<pre id="csv1"></pre>



</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
