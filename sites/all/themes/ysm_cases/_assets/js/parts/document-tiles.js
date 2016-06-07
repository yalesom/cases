/**
 * Hijack tile a hrefs
 */
jQuery(document).ready(function($) {
	$('.view-document-grid').find('.tile').each(function(){
		$(this).find('a').click(function(evt){
			evt.preventDefault();
			var url = $(this).attr('href'),
				template,
				tileID,
				containerID;

			if (url.indexOf(location.host) == '-1' || url.indexOf('files') > 0) {
				window.open(url);
			
			} else if ($(this).hasClass('in-use')) {
				return false;

			} else {
				// clone the template
				template 	= $('#template').clone();
				
				// create unique ID
				uid			= Math.floor(Math.random()*100)+1;

				// generate a tileID
				tileID		= 'tile-' + uid;

				// generate a buttonID
				buttonID	= 'button-' + uid;

				// update button attributes
				$(this).attr('id', buttonID);
				$(this).attr('class', 'in-use');
				
				// update the cloned template with the new tileID
				template.attr('id', tileID);
				
				// add the cloned template the DOM structure
				$('#main-content').prepend(template);

				//timer delay for a tad
				setTimeout(function() {
					$('#' + tileID).addClass('open');
				},500);
				
				$('#' + tileID + ' .tile-target').load(url + ' .tile-content', function(response, status, xhr) {
					if (status == 'success') {
						containerID = $('#' + $('#' + tileID).find('.tile-content').attr('id'));

						$('html, body').animate({ scrollTop: $('#' + tileID).offset().top + $('#page-header').height }, 1000);

						switch($('#' + tileID).find('.tile-content').attr('class').split(' ')[0]) {
							case 'chart-container':
								chartContainer 		= $('#' + $(this).find('.chart-target').attr('id'));
								readInChartCSV();
							break;
							
							case 'gallery-container':
								galleryContainer	= containerID;
								mySlider = loadGallery();
								//mySlider.reloadSlider();
							break;

							case 'mediacore-video-container':
								$('#' + tileID).find('iframe').unwrap();
							break;

							case 'html-embedded-content-container':
								jQuery('#' + tileID).find('p>iframe').unwrap();
								console.info('hello HTML');
							break;
							
							/*case 'infographic-container':
							break;*/

						};

						$('#' + tileID + ' .tile-wrapper').css('background', 'none');
						$(window).resize();
						$(window).resize();
					}
				});
			}
		});
	});
	
	// remove the modal window
	$(document).on('click', '.modal-close', function(evt) {
		evt.preventDefault();

		// remove the "in-use" class from the correct button ID
		// using the closed modal ID
		$('#button-' + $(this).closest('.modal').attr('id').split('-')[1]).removeClass('in-use');
		
		// destory the modal
		$(this).closest('.modal').remove();
	});
});