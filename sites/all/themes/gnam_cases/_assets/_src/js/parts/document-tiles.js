/**
 * Hijack tile a hrefs not tittles
 */
var tileID;

jQuery(document).ready(function($) {
	jQuery('.view-document-grid').find('.tile').each(function(){
		jQuery(this).find('a').click(function(evt){
			evt.preventDefault();


			var url = jQuery(this).attr('href'),
				template,
				containerID;

			if (url.indexOf(location.host) == '-1' || url.indexOf('files') > 0) {
				// this is a link to a file or off site location
				window.open(url);

			} else {
				//this is a local link to load into a modal

				// disable page scroll
				jQuery('html').css('overflow', 'hidden');

				// clone the template
				template 	= jQuery('#template').clone();

				// create unique ID
				uid			= Math.floor(Math.random()*100)+1;

				// generate a tileID
				tileID		= 'tile-' + uid;

				// update the cloned template with the new tileID
				template.attr('id', tileID);

				// add the cloned template the DOM structure
				jQuery('#main-content').before(template);

				//timer delay for a tad
				setTimeout(function() {
					jQuery('#' + tileID).addClass('open');
				},500);

				jQuery('#' + tileID + ' .tile-target').load(url + ' .tile-content', function(response, status, xhr) {
					if (status == 'success') {
						jQuery(document).bind('keyup', function(key) {
							if (key.keyCode == 27) {
								closeModalWindow();
							}
						});

						containerID = jQuery('#' + jQuery('#' + tileID).find('.tile-content').attr('id'));

						jQuery('html, body').animate({ scrollTop: jQuery('#' + tileID).offset().top + jQuery('#page-header').height }, 1000);

						switch(jQuery('#' + tileID).find('.tile-content').attr('class').split(' ')[0]) {
							case 'chart-container':
								chartContainer 		= jQuery('#' + jQuery(this).find('.chart-target').attr('id'));
								readInChartCSV();
							break;

							case 'gallery-container':
								galleryContainer	= containerID;
								mySlider = loadGallery();
							break;

							case 'mediacore-video-container':
								jQuery('#' + tileID).find('p>iframe').unwrap();
							break;

							case 'warpwire-video-container':
								console.info('Warpwire video!!');
								$('#' + tileID).find('p>iframe').unwrap();
							break;

							case 'html-embedded-content-container':
								jQuery('#' + tileID).find('p>iframe').unwrap();
								console.info('hello HTML');
							break;

							/*case 'infographic-container':
							break;*/

							
						};

						jQuery('#' + tileID + ' .tile-wrapper').css('background', 'none');
						$(window).resize();
						$(window).resize();
					}
				});
			}
		});
	});

	// remove the modal window
	jQuery(document).on('click', '.modal-close', function(evt) {
		evt.preventDefault();

		closeModalWindow();
	});
});

function closeModalWindow() {
	// destory the modal
	jQuery('#' + tileID).remove();

	// enable page scroll
	jQuery('html').css('overflow', 'auto');

	jQuery(document).unbind('keyup');
}
