<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col-gallery <?php print $classes;?> clearfix">

<?php
	drupal_add_js('jQuery(document).ready(function($) { galleryContainer = jQuery("#gallery-' . $nid . '"); loadGallery(); });', 'inline');

	print '<div id="gallery-' . $nid . '" class="gallery-container tile-content" '; 
	foreach($content as $f => $f_value) {
		if (strpos($f, 'field_') !== false && strpos($f, '_gallery') == false) {
			print 'data-' . str_replace('field', '', str_replace('_', '', strtolower($f))) . '="' . render($content[$f][0]) . '" ';
		}
	}
	// close the opening div tag
	print '>';

		//print '<h3 class="modal-header">' . $title . '</h3>';

		// start image list collection
		print '<ul class="bxslider">';
		
		// loop through the number gallery items
		for($i=0; $i<count($content['field_gallery_images']['#items']); $i++) {
			// get the current field collection item
			$currentFieldCollectionItem		= $content['field_gallery_images'][$i]['entity']['field_collection_item'];
			
			// get the current field collection item array key
			$currentFieldCollectionItemKey	= key($currentFieldCollectionItem);
			
			// update the current field collection item with the proper array key
			$currentFieldCollectionItem 	= $currentFieldCollectionItem[$currentFieldCollectionItemKey];

			// create the list item with the image
			print '<li><img src="' . file_create_url($currentFieldCollectionItem['field_gallery_image'][0]['#file']->uri) . '"';
			

			// check to make sure the there is an image caption
			if (array_key_exists('field_image_caption', $currentFieldCollectionItem)) {
				// add image cpation to the img title argument
				print 'title="' . $currentFieldCollectionItem['field_image_caption']['#items'][0]['value'] . '" ';
			}

			// close the img tag and list item
			print '/></li>';
		}

		// close the image list collection
		print '</ul>';
	// close the div element
	print '</div>';
?>

</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>