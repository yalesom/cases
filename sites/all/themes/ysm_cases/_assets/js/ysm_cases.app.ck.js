/* Yale Case Studies base scripts.
 * Author: Square360
 * square360.com
 *	version 1.1
 */
 


// !----- Site Specific Custom JS parts -----
// @codekit-append "parts/page-layout.js";
// @codekit-append "parts/headers.js";
// @codekit-append "parts/case-titles.js";
// @codekit-append "parts/jquery.highcharts.plotter.js"
// @codekit-append "parts/document-tiles.js"
// @codekit-append "parts/jquery.loadGallery.js"
// @codekit-append "parts/figures.js"
// @XXcodekit-append "parts/browser-detect.js"


/* **********************************************
     Begin page-layout.js
********************************************** */

// !Identify desktop devices
var mobile = IsMobile.detect();
if(!mobile){
	jQuery('html').addClass('desktop');
} else {
	jQuery('html').addClass('mobile');
};

// !Page resize
function pageResize(){
	// ! Move navigation container based on document width
	if (document.body.clientWidth <= 568 && mobile) {
		jQuery('.primary-nav > .block-views').height(window.innerHeight);
	} 
};

//Login form reposition CAS
jQuery('#edit-cas-login-redirection-message').appendTo('form#user-login-form');
jQuery('div.form-item-cas-identifier').appendTo('form#user-login-form');

// !Login form toggle
jQuery('#edit-cas-identifier').change(function(){
	if ( jQuery(this).is(':checked') ) {
		jQuery('#user-login-form .form-item-name').fadeOut(250);
		jQuery('#user-login-form .form-item-pass').fadeOut(250);
	} else {
		jQuery('#user-login-form .form-item-name').fadeIn(250);
		jQuery('#user-login-form .form-item-pass').fadeIn(250);
	}
});

// !Call resize
jQuery(window).bind("resize orientationchange", pageResize);

/* **********************************************
     Begin headers.js
********************************************** */

//(function($) {
/*
*  Header scripts
*/

// !Toggle animation for top header
var headerHeight, navHeight, pageHeader;
function resizeHeader(){
	// Mobile left menu toggle
	if (document.body.clientWidth <= 568 && mobile) {
		jQuery('.primary-nav > .block-views').height(window.innerHeight);
		jQuery('#page-wrapper').toggleClass('open');
	} 
	// Desktop dropdown toggle
	else {
		// ! Test if header is open or closed
		pageHeader = jQuery('#page-header');
		if ( pageHeader.hasClass('closed') ){
			oneAtATime = true;
			pageHeader.removeClass('closed')
			.find('.primary-nav').height(0).show();
			headerHeight = pageHeader.find('.section-wrap').outerHeight(true) + pageHeader.find('.primary-nav > .block').outerHeight(true);
			navHeight = pageHeader.find('.primary-nav > .block').outerHeight(true);
		} else {
			oneAtATime = false;
			headerHeight = pageHeader.find('.section-wrap').outerHeight(true) - pageHeader.find('.primary-nav > .block').outerHeight(true);
			navHeight = 0;
			pageHeader.addClass('closed');
		}
		// Test header height to make sure it does not exceed screen height
		if ( headerHeight > jQuery(window).height() ) {
			headerHeight = jQuery(window).height();
			navHeight = jQuery(window).height() - pageHeader.find('.header-main').outerHeight(true);
		}
		pageHeader.parent().animate({
			height: headerHeight
		}, 500, 'easeInOutQuad');
		pageHeader.find('.primary-nav').animate({
			height: navHeight
		}, 500, 'easeInOutQuad',
		function(){
				// callback
				jQuery('.touch #page-header .primary-nav').css('overflow','scroll');
			});
	}
};

// ! Stop navigation click/touch events from bubbling up
jQuery('.primary-nav .view-book-outline a').bind('click touch', function(e){
	e.stopPropagation();
});

// !Sticky Header
jQuery('.toolbar #page-header').waypoint('sticky', {
	offset: function(){
		return jQuery('#toolbar').height();
	}
});
jQuery('#page-header').not('.toolbar #page-header').waypoint('sticky');

var oneAtATime = true;
jQuery('.node-type-book #main-content').waypoint(function(direction){
	if (direction === 'down' && oneAtATime) {
		oneAtATime = false;
		//console.log(direction);
		resizeHeader();
		// Disable waypoint to scroll
		jQuery('.node-type-book #main-content').waypoint('disable');
		var enableWaypoint = window.setTimeout(function(){
			jQuery('.node-type-book #main-content').waypoint('enable');
		},200);
	} 
	if (direction === 'up' && !oneAtATime) {
		//console.log(direction);
		oneAtATime = true;
		resizeHeader();
		jQuery(scrollElem).animate({scrollTop: 0}, 500, 'easeInOutQuad', function(){
			jQuery('#page-header').removeClass('overlay');
		});
	}
	//resizeHeader();
}, {
	offset: function() {
	// subtract nav height from header container
	return jQuery('#page-header .section-wrap').outerHeight(true) - 2 + jQuery('#toolbar').height();
	 }//,
  // triggerOnce: true 
});

// ! Move navigation container and disable waypoint outside page-wrapper for mobile
if (document.body.clientWidth <= 568 && mobile) {
	jQuery('body').addClass('phone');
	jQuery('#page-header .primary-nav').prependTo( jQuery('#page-wrapper') );
	jQuery('.node-type-book #main-content').waypoint('disable');
}

// Set initial height on .primary nav
jQuery('#page-header .primary-nav').height( jQuery('#page-header .primary-nav > .block').outerHeight(true) );
jQuery('#page-header').parent().height( jQuery('#page-header .section-wrap').outerHeight(true) );

// ! Set conditions for interior 
jQuery('#page-header').not('.node-type-book  #page-header').addClass('overlay').addClass('closed');

// !Navigation click/touch event
jQuery('.logged-in #page-header, .logged-in .primary-nav').bind('touch click', function(){
	resizeHeader();
});
// !Add navigation close button
jQuery('#page-header .section-wrap').append('<i class="icon-remove"></i>')
jQuery('#page-header .icon-cancel').bind('touch click', function(){
	resizeHeader();
});


// ! Add placehold attributes to login form
jQuery('.user-login #edit-name').attr('placeholder','Username');
jQuery('.user-login #edit-pass').attr('placeholder','Password');

jQuery('.user-login #edit-submit').remove();
jQuery('.user-login #edit-actions').append('<button type="submit" id="edit-submit" class="form-submit" name="op">Login</button>');

// !Add padding to fixed header for admin users
var adminSticky = window.setTimeout(function(){
	jQuery('.toolbar #page-header').css('top', jQuery('body.toolbar').css('padding-top') );
},200);


var scrollElem = scrollableElement('html', 'body');
// !Activate Top link in footer 
jQuery('.scrolltoTop').click(function(e){
	e.preventDefault();
	jQuery(scrollElem).animate({scrollTop: 0}, 400);
})
// use the first element that is "scrollable"
function scrollableElement(els) {
	for (var i = 0, argLength = arguments.length; i <argLength; i++) {
		var el = arguments[i],
		$scrollElement = jQuery(el);
		if ($scrollElement.scrollTop()> 0) {
			return el;
		} else {
			$scrollElement.scrollTop(1);
			var isScrollable = $scrollElement.scrollTop()> 0;
			$scrollElement.scrollTop(0);
			if (isScrollable) {
				return el;
			}
		}
	}
	return [];
}
//})(jQuery);

/* **********************************************
     Begin case-titles.js
********************************************** */

(function($) {
	/*
	* Case tile scripts
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
			tile.addClass('no-img').find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-sq.gif');
		} 
	});
	// !Count number of tiles and set related width class
	$('.document-tiles').each(function(){
		var container = $(this);
		container.addClass('processed');
		if ( container.find('.view-content').children().length == 1 ){
			container.addClass('one-sixth');
		} else if ( container.find('.view-content').children().length == 2 ){
			container.addClass('one-third');
		} else if( container.find('.view-content').children().length > 2 ){
			container.addClass('one-half');
		}
	});
	// !Responsive images
	$('img:not(.loaded)').each(function() {
		$(this).addClass('loaded').removeAttr('width').removeAttr('height').css({'height':'', 'width':''});
	});

	//Media Core iFrame unwrap
	$('.mediacore-video-container iframe').unwrap();
})(jQuery);

/* **********************************************
     Begin jquery.highcharts.plotter.js
********************************************** */

var highchartColors = [
	'#00457c', // dark blue 
	'#c9b579', // light brown
	'#3775a4', // medium blue
	'#bf6f6f', // pale red
	'#42889b', // greenish blue
	'#b242ae', // purple
	'#79ba86', // green
	'#5d94be', // light blue
	'#eee256' // yellow
],
	chartContainer 	= '';

/**
 * This reads the CSV and calls the correct parser based on the chart type
 *
 * @name	readInChartCSV
 * @params	none
 */
function readInChartCSV() {
	var $ = jQuery;
	
	$.ajax({
		url: chartContainer.data('src'),
		type: 'get',
		dataType: 'text',
		success: function(result) {
			var chartArray = $.csv.toArrays(result);

			$('#chart-data').html(result);

			switch(chartContainer.data('charttype')) {
				case 'line': case 'bar': case 'column':
					genericChartParser(chartArray, chartContainer);
				break;

				case 'pie':
					pieChartParser(chartArray, chartContainer);
				break;

				case 'stock':
					stockChartParser(chartArray, chartContainer);
				break;
			};
		},
		error: function(error) {
			console.log(error.status + ' ' + error.statusText)
		}
	});
}

/**
 * This converts any readable date into a unix based time code
 *
 * @name	convertDate
 * @param 	date
 */
function convertDate(date) {
		// converts the passed date into an array
	var dateArray 	= date.split('/'),
		// convert a date into a UTC date
		utcDate 	= new Date(Date.UTC(dateArray[2], dateArray[0]-1, dateArray[1]));

	// returns the converted date into the unix time code
	return parseFloat(utcDate.getTime() / 1000.0 + '000');
}

/**
 * This converts any string into a lower case hyphenated string.
 *
 * @name	convertStringToID
 * @param 	theString
 */
function convertStringToID(theString) {
	return theString.toLowerCase().replace(/\s+/g, '-');
}

/**
 * ===================================================================================
 * GENERIC CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for generic charts (line, bar, column)
 *
 * @name	genericChartParser
 * @param	chartArray
 */
function genericChartParser(chartArray) {
	var $ 					= jQuery,
		chartOptions		= {},
		categories 			= chartArray[0],
		series 				= [],
			seriesData		= [],
			seriesCoutner	= 0;
	
	// loop through chartArray starting at the 2nd index
	// this is because we already got the categories into it's own array
	for (var o = 1; o < chartArray.length; o++) {
		// clear the series data
		seriesData = [];

		// add the name of the series to the current object
		series[seriesCoutner] = {
			name: chartArray[o][0]
		};

		// loop through the categories starting at the 2nd index
		// because the first index is a "category" label, which we don't need
		for (var i = 1; i < categories.length; i++) {
			// convert the string value to a number (float) 
			// and add it the current seriesData index
			seriesData[i-1] = parseFloat(chartArray[o][i]);
		};

		// update the series with seriesData
		series[seriesCoutner].data = seriesData;

		// update the series counter for the next series
		seriesCoutner++;
	};

	// add the categories to the chartOptions
	// we take off the first index because it's not needed
	chartOptions.categories = categories.slice(1);

	// add the series to the chartOptions
	chartOptions.series 	= series;

	// call function to show the chart
	genericChartPlotter(chartOptions, chartContainer);
}
/**
 * Creates a generic chart (line, bar or column)
 *
 * @name	genericChartPlotter
 * @param	chartOptions
 */
function genericChartPlotter(chartOptions) {
	var options = chartContainer.data();

	chartContainer.highcharts({
		chart: {
			type: options.charttype
		},
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		xAxis: {
			categories: chartOptions.categories
		},
		yAxis: {
			title: {
				text: options.yaxis
			}
		},
		tooltip: {
			enabled: options.showtooltip,
			valueSuffix: options.tooltipvalue
		},
		legend: {
			enabled: options.showlegend,
			layout: 'vertical',
			align: 'right',
			verticalAlign: 'middle',
			borderWidth: 0
		},
		plotOptions: {
			line: {
				dataLabels: {
					enabled: options.showdatalabels
				},
				enableMouseTracking: options.enablemousetracking
			},
			column: {
				stacking: (options.stackvalues === true) ? 'normal' : '',
				dataLabels: {
					enabled: options.showdatalabels,
					color: (options.stackvalues === true) ? 'white' : (Highcharts.theme && Highcharts.theme.dataLabelsColor)
				},
				enableMouseTracking: options.enablemousetracking
			},
			bar: {
				stacking: (options.stackvalues === true) ? 'normal' : '',
				dataLabels: {
					enabled: options.showdatalabels,
					color: (options.stackvalues === true) ? 'white' : (Highcharts.theme && Highcharts.theme.dataLabelsColor)
				},
				enableMouseTracking: options.enablemousetracking
			}
		},
		colors: highchartColors,
		series: chartOptions.series
	});
}

/**
 * ===================================================================================
 * PIE CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for the pie charts
 *
 * @name	pieChartParser
 * @param	chartArray
 */
function pieChartParser(chartArray) {
	var $ 				= jQuery,
		seriesData		= [];

	// loop through chartArray
	for (var i = 0; i < chartArray.length; i++) {
		// add the current array to the seriesData
		seriesData[i] = [
			chartArray[i][0],
			// convert the string value to a number (float) 
			parseFloat(chartArray[i][1])
		];
	};

	// call function to show the chart
	pieChartPlotter(seriesData, chartContainer);
}
/**
 * Creates a pie chart
 *
 * @name	pieChartPlotter
 * @param	seriesData
 */
function pieChartPlotter(seriesData) {
	var options = chartContainer.data();

	chartContainer.highcharts({
		chart: {
			plotBackgroundColor: null,
			plotBorderWidth: null,
			plotShadow: false
		},
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		tooltip: {
			enabled: options.showtooltip,
			pointFormat: '{series.name}: <b>{point.percentage:.1f}%</b>'
		},
		plotOptions: {
			pie: {
				allowPointSelect: options.enablesliceclick,
				cursor: 'pointer',
				dataLabels: {
					enabled: options.showdatalabels,
					color: '#000000',
					connectorColor: '#000000',
					format: '<b>{point.name}</b>: {point.percentage:.1f} %'
				},
				showInLegend: options.showlegend
			}
		},
		series: [{
			type: 'pie',
			data: seriesData
		}]
	});
}

/**
 * ===================================================================================
 * STOCK CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for stock charts
 *
 * @name	stockChartParser
 * @param	chartArray
 */
function stockChartParser(chartArray) {
	var $ 					= jQuery,
		dates 				= chartArray[0],
		// an array of series objects
		seriesOptions		= [],
			// the data in each series
			seriesData		= [],
			// the counter for series options
			seriesCounter	= 0;

	// loop through chartArray starting at the 2nd index
	// this is because we've already got the dates into it's own array
	for (var o = 1; o < chartArray.length; o++) {
		// clear the series data
		seriesData = [];

		// add the series and ID to the current series object
		seriesOptions[seriesCounter] = {
			name: chartArray[o][0],
			id: chartArray[o][0].toLowerCase().replace(/\s+/g, '-')
		};

		// loop through the dates starting at the 2nd index
		// because the first index is a "dates" label, which we don't need
		for (var i = 1; i < dates.length; i++) {
			// add the date and value pair to current seriesData array index
			seriesData[i-1] = [
				// call function to convert the readable date to unix time code
				convertDate(dates[i]),
				// conver the string value to a number (float)
				parseFloat(chartArray[o][i])
			];
		};

		// add the seriesData to the current series object
		seriesOptions[seriesCounter].data = seriesData;

		// update the series counter for the next series
		seriesCounter++;
	};

	if ($('#flags').length) {
		// parses the JSON string into an object
		flags = JSON.parse('[' + $('#flags').html() + ']');

		// loop through the new object
		$.each(flags, function(index, value) {
			// call function to convert the series name
			value.onSeries	= convertStringToID(value.onSeries);
			
			$.each(flags[index].data, function(index, value) {
				// parse the "x" value into a number and add 3 zeros
				value.x		= parseInt(value.x + '000');
			});
		});
		
		seriesOptions = seriesOptions.concat(flags);
	}

	// call function to show the chart
	stockChartPlotter(seriesOptions, chartContainer);
}
/**
 * This takes the seriesOptions and creates the chart
 *
 * @name	plotStockChart
 * @param 	seriesOptions
 */
function stockChartPlotter(seriesOptions) {
	var options = chartContainer.data();

	chartContainer.highcharts('StockChart', {
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		rangeSelector: {
			selected: 5
		},
		tooltip: {
			valueDecimals: 2
		},
		series: seriesOptions
	});
};

/* **********************************************
     Begin document-tiles.js
********************************************** */

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
	});
});

/* **********************************************
     Begin jquery.loadGallery.js
********************************************** */

var galleryContainer;

function loadGallery() {
	var $ 			= jQuery,
		options 	= galleryContainer.data(),
		mySlider	= $('.bxslider').bxSlider({
						mode: options.transitionmode,
						captions: options.showcaptions,
						auto: options.autoplay,
						controls: options.showcontrols,
						autoHover: options.pauseonhover,
						pause: options.transitiondelay,
						adaptiveHeight: options.adaptiveheight,
						autoControls: options.showplaypause,
						autoControlsCombine: true,
						onSliderLoad: function() {
							console.log('loaded')
						}
					});
		return mySlider;
}

/* **********************************************
     Begin figures.js
********************************************** */

jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('figure figcaption').each(function(){
		this.width(this.prev().width());
	});
});