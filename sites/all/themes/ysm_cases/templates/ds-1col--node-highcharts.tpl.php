<?php

/**
 * @file
 * Display Suite 1 column Highcharts template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-highcharts <?php print $classes;?> clearfix">

<?php
	drupal_add_js('jQuery(document).ready(function() { chartContainer = jQuery("#chart-' . $nid . '"); readInChartCSV(); });', 'inline');
	
	print '<div id="wrapping-chart-' . $nid .'" class="chart-container tile-content">'; 
		print '<div id="chart-' . $nid .'" class="chart-target"'; 
		foreach($content as $f => $f_value) {
			if (strpos($f, 'field_') !== false && strpos($f, '_src') == false && strpos($f, '_flags') == false && strpos($f, '_footnote') == false) {
				print 'data-' . str_replace('field', '', str_replace('_', '', strtolower($f))) . '="' . render($content[$f][0]) . '" ';
			}
		}
		print 'data-title="' . $title . '" ';
		print 'data-src="/sites/default/files/' . $node->field_src['und'][0]['filename'] . '">';
			
			print '<div style="display:none;" id="flags">';

			// loop through the number flag items
			for($i=0; $i<count($content['field_flags']['#items']); $i++) {
				// get the current field collection item
				$currentFieldCollectionItem		= $content['field_flags'][$i]['entity']['field_collection_item'];

				// get the current field collection item array key
			 	$currentFieldCollectionItemKey	= key($currentFieldCollectionItem);

				// update the current field collection item with the proper array key
				$currentFieldCollectionItem 	= $currentFieldCollectionItem[$currentFieldCollectionItemKey];

				// print the opening of the JSON object
				print '{ "type" : "flags", ';
				
				// print the series name in the JSON object
			 	print '"onSeries" : "' . $currentFieldCollectionItem['field_flag_series_name'][0]['#markup'] . '", ';
				
				// print the opening of the data array for the JSON object
				print '"data" : [ ';

			 	// loop through the number of flag options
				for ($o=0; $o<count($currentFieldCollectionItem['field_flag_options']['#items']); $o++) {
					// get the current flag field collection item
					$currentFlagFieldCollectionItem		= $currentFieldCollectionItem['field_flag_options'][$o]['entity']['field_collection_item'];

					// get the current flag field collection item array key
			 		$currentFlagFieldCollectionItemKey	= key($currentFlagFieldCollectionItem);

			 		// update the current flag field collection item with the proper array key
					$currentFlagFieldCollectionItem 	= $currentFlagFieldCollectionItem[$currentFlagFieldCollectionItemKey];

					// print the current flag title in the JSON object
					print '{ "title" : "' . $currentFlagFieldCollectionItem['field_flag_title'][0]['#markup'] . '", ';

					// get the current flag date
					print '"x" : "' . $currentFlagFieldCollectionItem['field_flag_date'][0]['#markup'] . '"';

					// only close the object if there are more flag options
					if ($o+1 < count($currentFieldCollectionItem['field_flag_options']['#items'])) {
						print ' },';
					// close the data object array because there are no more flag options
					} else {
						print ' }]';
					}
				}

				// close the flag object
				print ' , "enableMouseTracking" : false }';

				// only add a comma if there are more flag items
				if ($i+1 < count($content['field_flags']['#items'])) {
					print ',';
				}
			}

			// close the flags div
			print '</div>';


		// close chart containing div
		print '</div>';

		print '<div class="chart-footnote">' . $node->field_chart_footnote['und'][0]['value'] . '</div>';

	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>