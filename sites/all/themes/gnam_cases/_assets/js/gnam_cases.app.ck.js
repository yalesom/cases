/**
 * GNAM - Merge of Cases Platform and GNAM styles
 * @version 0.1.0
 * @build 2014-08-20 | 155954
 * @author Square360, Inc.
 * @client Yale School of Management
 */
/* Yale Case Studies base scripts.

 */
 
// !----- Site Specific Custom JS parts -----

//= require "../../../ysm_cases/_assets/js/parts/page-layout.js"
//= require "../../../ysm_cases/_assets/js/parts/headers.js"
//= require "../../../ysm_cases/_assets/js/parts/jquery.highcharts.plotter.js"
//= require "../../../ysm_cases/_assets/js/parts/jquery.loadGallery.js"
//= require "../../../ysm_cases/_assets/js/aprts/figures.js"
//= require "../../../ysm_cases/_assets/js/parts/browser-detect.js"
/**
 * Hijack tile a hrefs not tittles
 */
jQuery(document).ready(function($) {
	$('.view-document-grid').find('.tile').each(function(){
		$(this).find('a').click(function(evt){
			evt.preventDefault();

			// disable page scroll
			$('html').css('overflow', 'hidden');

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
				$('#main-content').before(template);

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
							break;

							case 'mediacore-video-container':
								$('#' + tileID).find('iframe').unwrap();
							break;
							/*case 'infographic-container':
							break;*/
							case 'sheetnode-container':
								var nid = containerID.data('nid'),
									sheetnode = {},
									sheetnodeValue = containerID.find('#sheetnode-value').html();

								sheetnode['sheetnode-' + nid] = {
									aliases: ['sheetnode'],
									containerElement: 'sheetnode-' + nid,
									context: {
										'entity-name': 'node',
										oid: '"' + nid + '"'
									},
									imagePrefix: '/sites/all/modules/sheetnode/socialcalc/images/sc-',
									permissions: {
										'edit sheetnode settings': true
									},
									saveElement: false,
									showToolbar: 0,
									value: sheetnodeValue,
									viewMode: '2'
								};
								
								Drupal.settings.sheetnode = sheetnode;
								Drupal.behaviors.sheetnode.attach('#sn-container-' + nid, Drupal.settings);
							break;
						};

						$('#' + tileID + ' .tile-wrapper').css('background', 'none');
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

		// enable page scroll
		$('html').css('overflow', 'auto');

	});
});

(function($) {
	/*
	* Case tile scripts not tittles
	*/

	// !Reposition toplevel book in case outline to section list
	$('.case-title .view-content a').each(function(){
		$(this).prependTo( $(this).parentsUntil('.case-menu').parent().find('.stem_class').first() ).wrap('<li class="case-title"/>');
	});
	// !Add blank images to case study tiles without a src
	$('.case-tiles .tile').each(function(){
		var tile = $(this);
		if ( tile.find('img').attr('src') == ''){
			tile.addClass('no-img')
		}
		if ( tile.hasClass('small') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-s.gif');
		} else if ( tile.hasClass('medium') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-m.gif');
		} else if ( tile.hasClass('large') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-l.gif');
		} else if ( tile.hasClass('xlarge') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-xl.gif');
		}
		
	});
	// !Add blank images to case study tiles without a src
	$('.document-tiles .tile').each(function(){
		var tile = $(this);
		if ( tile.find('img').attr('src') == ''){
			tile.find('img').remove();
			tile.addClass('no-img'); //.find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-sq.gif');
		} 
	});
	//remove icon from tiles with no image and no icon-class
	$('.case-tiles .tile.no-img').each(function(){
		$(this).find('i').each(function(){
			void 0;
			if ($(this).attr('class') == '') {
				$(this).closest('div.tile.no-img').addClass('no-icon');
			}
		});
	})


	// !Count number of tiles and set related width class
	$('.document-tiles').each(function(){
		var container = $(this);
		void 0;
		container.addClass('one-third');

	});
	// !Responsive images
	$('img:not(.loaded)').each(function() {
		$(this).addClass('loaded').removeAttr('width').removeAttr('height').css({'height':'', 'width':''});
	});

	//Media Core iFrame unwrap
	$('.mediacore-video-container iframe').unwrap();
})(jQuery);

(function($) {
	// not working yet for cases
	$( document ).ready(function( ) {
		//see if localStorage item exists
		if(localStorage.getItem('adminRoamView') == null) {
			//if not create it and make it false
			localStorage.setItem('adminRoamView','false');
		} else {
			if (localStorage.getItem('adminRoamView') == 'true') {
				$('html').addClass('admin-roam');
				$('footer a#btnAdminToggle').addClass('active');
			}
		}


		$("footer a#btnAdminToggle").click(function(){ 
			if (localStorage.getItem('adminRoamView') == 'true') {
				//console.info('turning admin roam view off');
				localStorage.setItem('adminRoamView','false');
				$('html').removeClass('admin-roam');
				$('body').css('padding-top','39px');
				$('footer a#btnAdminToggle').toggleClass('active');
			} else {
				//console.info('turning admin roam view on');
				localStorage.setItem('adminRoamView','true');
				$('html').addClass('admin-roam');
				$('body').css('padding-top','0px');
				$('footer a#btnAdminToggle').toggleClass('active');
			}
		});
	});
}(jQuery));
