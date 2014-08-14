<<<<<<< HEAD
function pageResize(){document.body.clientWidth<=568&&mobile&&jQuery(".primary-nav > .block-views").height(window.innerHeight)}function resizeHeader(){document.body.clientWidth<=568&&mobile?(jQuery(".primary-nav > .block-views").height(window.innerHeight),jQuery("#page-wrapper").toggleClass("open")):(pageHeader=jQuery("#page-header"),pageHeader.hasClass("closed")?(oneAtATime=!0,pageHeader.removeClass("closed").find(".primary-nav").height(0).show(),headerHeight=pageHeader.find(".section-wrap").outerHeight(!0)+pageHeader.find(".primary-nav > .block").outerHeight(!0),navHeight=pageHeader.find(".primary-nav > .block").outerHeight(!0)):(oneAtATime=!1,headerHeight=pageHeader.find(".section-wrap").outerHeight(!0)-pageHeader.find(".primary-nav > .block").outerHeight(!0),navHeight=0,pageHeader.addClass("closed")),headerHeight>jQuery(window).height()&&(headerHeight=jQuery(window).height(),navHeight=jQuery(window).height()-pageHeader.find(".header-main").outerHeight(!0)),pageHeader.parent().animate({height:headerHeight},500,"easeInOutQuad"),pageHeader.find(".primary-nav").animate({height:navHeight},500,"easeInOutQuad",function(){jQuery(".touch #page-header .primary-nav").css("overflow","scroll")}))}function scrollableElement(e){for(var t=0,a=arguments.length;a>t;t++){var o=arguments[t],r=jQuery(o);if(r.scrollTop()>0)return o;r.scrollTop(1);var i=r.scrollTop()>0;if(r.scrollTop(0),i)return o}return[]}function readInChartCSV(){var $=jQuery;$.ajax({url:chartContainer.data("src"),type:"get",dataType:"text",success:function(e){var t=$.parse(e,{header:!1,dynamicTyping:!0});console.info(t);var a=t.results;switch($("#chart-data").html(e),chartContainer.data("charttype")){case"line":case"bar":case"column":genericChartParser(a,chartContainer);break;case"pie":pieChartParser(a,chartContainer);break;case"stock":stockChartParser(a,chartContainer)}},error:function(e){console.log(e.status+" "+e.statusText)}})}function convertDate(e){if(e.toString().indexOf("/")>-1)var t=e.split("/"),a=new Date(Date.UTC(t[2],t[0]-1,t[1]));else a=ExcelDateToJSDate(e);return parseFloat(a.getTime()/1e3+"000")}function ExcelDateToJSDate(e){var t=Math.floor(e-25569),a=86400*t,o=new Date(1e3*a),r=e-Math.floor(e)+1e-7,i=Math.floor(86400*r),n=i%60;i-=n;var s=Math.floor(i/3600),l=Math.floor(i/60)%60;return new Date(o.getFullYear(),o.getMonth(),o.getDate(),s,l,n)}function convertStringToID(e){return e.toLowerCase().replace(/\s+/g,"-")}function genericChartParser(e){for(var $=jQuery,t={},a=e[0],o=[],r=[],i=0,n=1;n<e.length;n++){r=[],o[i]={name:e[n][0]};for(var s=1;s<a.length;s++)r[s-1]=parseFloat(e[n][s]);o[i].data=r,i++}t.categories=a.slice(1),t.series=o,genericChartPlotter(t,chartContainer)}function genericChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts({chart:{type:t.charttype},title:{text:t.title},subtitle:{text:t.subtitle},xAxis:{categories:e.categories},yAxis:{title:{text:t.yaxis}},tooltip:{enabled:t.showtooltip,valueSuffix:t.tooltipvalue},legend:{enabled:t.showlegend,layout:"vertical",align:"right",verticalAlign:"middle",borderWidth:0},plotOptions:{line:{dataLabels:{enabled:t.showdatalabels},enableMouseTracking:t.enablemousetracking},column:{stacking:t.stackvalues===!0?"normal":"",dataLabels:{enabled:t.showdatalabels,color:t.stackvalues===!0?"white":Highcharts.theme&&Highcharts.theme.dataLabelsColor},enableMouseTracking:t.enablemousetracking},bar:{stacking:t.stackvalues===!0?"normal":"",dataLabels:{enabled:t.showdatalabels,color:t.stackvalues===!0?"white":Highcharts.theme&&Highcharts.theme.dataLabelsColor},enableMouseTracking:t.enablemousetracking}},colors:highchartColors,series:e.series})}function pieChartParser(e){for(var $=jQuery,t=[],a=0;a<e.length;a++)t[a]=[e[a][0],parseFloat(e[a][1])];pieChartPlotter(t,chartContainer)}function pieChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts({chart:{plotBackgroundColor:null,plotBorderWidth:null,plotShadow:!1},title:{text:t.title},subtitle:{text:t.subtitle},tooltip:{enabled:t.showtooltip,pointFormat:"{series.name}: <b>{point.percentage:.1f}%</b>"},plotOptions:{pie:{allowPointSelect:t.enablesliceclick,cursor:"pointer",dataLabels:{enabled:t.showdatalabels,color:"#000000",connectorColor:"#000000",format:"<b>{point.name}</b>: {point.percentage:.1f} %"},showInLegend:t.showlegend}},series:[{type:"pie",data:e}]})}function stockChartParser(e){for(var $=jQuery,t=e[0],a=[],o=[],r=0,i=1;i<e.length;i++){o=[],a[r]={name:e[i][0],id:e[i][0].toLowerCase().replace(/\s+/g,"-")};for(var n=1;n<t.length;n++)o[n-1]=[convertDate(t[n]),parseFloat(e[i][n])];a[r].data=o,r++}$("#flags").length&&(flags=JSON.parse("["+$("#flags").html()+"]"),$.each(flags,function(e,t){t.onSeries=convertStringToID(t.onSeries),$.each(flags[e].data,function(e,t){t.x=parseInt(t.x+"000")})}),a=a.concat(flags)),stockChartPlotter(a,chartContainer)}function stockChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts("StockChart",{title:{text:t.title},subtitle:{text:t.subtitle},rangeSelector:{selected:5},tooltip:{valueDecimals:2},series:e})}function loadGallery(){var $=jQuery,e=galleryContainer.data(),t=$(".bxslider").bxSlider({mode:e.transitionmode,captions:e.showcaptions,auto:e.autoplay,controls:e.showcontrols,autoHover:e.pauseonhover,pause:e.transitiondelay,adaptiveHeight:e.adaptiveheight,autoControls:e.showplaypause,autoControlsCombine:!0,onSliderLoad:function(){console.log("loaded")}});return t}var mobile=IsMobile.detect();jQuery("html").addClass(mobile?"mobile":"desktop"),jQuery(document).ready(function($){jQuery("#edit-cas-login-redirection-message").appendTo("form#user-login-form"),jQuery("div.form-item-cas-identifier").appendTo("form#user-login-form"),jQuery("#edit-cas-identifier").change(function(){jQuery(this).is(":checked")?(jQuery("#user-login-form .form-item-name").fadeOut(250),jQuery("#user-login-form .form-item-pass").fadeOut(250)):(jQuery("#user-login-form .form-item-name").fadeIn(250),jQuery("#user-login-form .form-item-pass").fadeIn(250))}),console.info(jQuery("div.show-sponsor").text()),"0"==jQuery("div.show-sponsor").text()&&jQuery("div.sponsor").hide()}),jQuery(window).bind("resize orientationchange",pageResize);var headerHeight,navHeight,pageHeader;jQuery(".primary-nav .view-book-outline a").bind("click touch",function(e){e.stopPropagation()}),jQuery(".toolbar #page-header").waypoint("sticky",{offset:function(){return jQuery("#toolbar").height()}}),jQuery("#page-header").not(".toolbar #page-header").waypoint("sticky");var oneAtATime=!0;jQuery(".node-type-book #main-content").waypoint(function(e){if("down"===e&&oneAtATime){oneAtATime=!1,resizeHeader(),jQuery(".node-type-book #main-content").waypoint("disable");var t=window.setTimeout(function(){jQuery(".node-type-book #main-content").waypoint("enable")},200)}"up"!==e||oneAtATime||(oneAtATime=!0,resizeHeader(),jQuery(scrollElem).animate({scrollTop:0},500,"easeInOutQuad",function(){jQuery("#page-header").removeClass("overlay")}))},{offset:function(){return jQuery("#page-header .section-wrap").outerHeight(!0)-2+jQuery("#toolbar").height()}}),document.body.clientWidth<=568&&mobile&&(jQuery("body").addClass("phone"),jQuery("#page-header .primary-nav").prependTo(jQuery("#page-wrapper")),jQuery(".node-type-book #main-content").waypoint("disable")),jQuery("#page-header .primary-nav").height(jQuery("#page-header .primary-nav > .block").outerHeight(!0)),jQuery("#page-header").parent().height(jQuery("#page-header .section-wrap").outerHeight(!0)),jQuery("#page-header").not(".node-type-book  #page-header").addClass("overlay").addClass("closed"),jQuery(".logged-in #page-header, .logged-in .primary-nav").bind("touch click",function(){resizeHeader()}),jQuery("#page-header .section-wrap").append('<i class="icon-remove"></i>'),jQuery("#page-header .icon-cancel").bind("touch click",function(){resizeHeader()}),jQuery(".user-login #edit-name").attr("placeholder","Username"),jQuery(".user-login #edit-pass").attr("placeholder","Password"),jQuery(".user-login #edit-submit").remove(),jQuery(".user-login #edit-actions").append('<button type="submit" id="edit-submit" class="form-submit" name="op">Login</button>');var adminSticky=window.setTimeout(function(){jQuery(".toolbar #page-header").css("top",jQuery("body.toolbar").css("padding-top"))},200),scrollElem=scrollableElement("html","body");jQuery(".scrolltoTop").click(function(e){e.preventDefault(),jQuery(scrollElem).animate({scrollTop:0},400)});var highchartColors=["#00457c","#c9b579","#3775a4","#bf6f6f","#42889b","#b242ae","#79ba86","#5d94be","#eee256"],chartContainer="",galleryContainer;jQuery(document).ready(function($){$("html.lt-ie9").length>0&&$.get("/sites/all/themes/ysm_cases/_assets/partials/browser-detect.html",function(e){$("article.main-content").prepend(e)})}),jQuery(document).ready(function($){$(".view-document-grid").find(".tile").each(function(){$(this).find("a").click(function(e){e.preventDefault();var t=$(this).attr("href"),a,o,r;if("-1"==t.indexOf(location.host)||t.indexOf("files")>0)window.open(t);else{if($(this).hasClass("in-use"))return!1;a=$("#template").clone(),uid=Math.floor(100*Math.random())+1,o="tile-"+uid,buttonID="button-"+uid,$(this).attr("id",buttonID),$(this).attr("class","in-use"),a.attr("id",o),$("#main-content").before(a),setTimeout(function(){$("#"+o).addClass("open")},500),$("#"+o+" .tile-target").load(t+" .tile-content",function(e,t,a){if("success"==t){switch(r=$("#"+$("#"+o).find(".tile-content").attr("id")),$("html, body").animate({scrollTop:$("#"+o).offset().top+$("#page-header").height},1e3),$("#"+o).find(".tile-content").attr("class").split(" ")[0]){case"chart-container":chartContainer=$("#"+$(this).find(".chart-target").attr("id")),readInChartCSV();break;case"gallery-container":galleryContainer=r,mySlider=loadGallery();break;case"mediacore-video-container":$("#"+o).find("iframe").unwrap();break;case"sheetnode-container":var i=r.data("nid"),n={},s=r.find("#sheetnode-value").html();n["sheetnode-"+i]={aliases:["sheetnode"],containerElement:"sheetnode-"+i,context:{"entity-name":"node",oid:'"'+i+'"'},imagePrefix:"/sites/all/modules/sheetnode/socialcalc/images/sc-",permissions:{"edit sheetnode settings":!0},saveElement:!1,showToolbar:0,value:s,viewMode:"2"},Drupal.settings.sheetnode=n,Drupal.behaviors.sheetnode.attach("#sn-container-"+i,Drupal.settings)}$("#"+o+" .tile-wrapper").css("background","none")}})}})}),$(document).on("click",".modal-close",function(e){e.preventDefault(),$("#button-"+$(this).closest(".modal").attr("id").split("-")[1]).removeClass("in-use"),$(this).closest(".modal").remove(),$("html").css("overflow","auto")})}),function($){$(".case-title .view-content a").each(function(){$(this).prependTo($(this).parentsUntil(".case-menu").parent().find(".stem_class").first()).wrap('<li class="case-title"/>')}),$(".case-tiles .tile").each(function(){var e=$(this);""==e.find("img").attr("src")&&e.addClass("no-img"),e.hasClass("small")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-s.gif"):e.hasClass("medium")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-m.gif"):e.hasClass("large")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-l.gif"):e.hasClass("xlarge")&&""==e.find("img").attr("src")&&$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-xl.gif")}),$(".document-tiles .tile").each(function(){var e=$(this);""==e.find("img").attr("src")&&(e.find("img").remove(),e.addClass("no-img"))}),$(".case-tiles .tile.no-img").each(function(){$(this).find("i").each(function(){console.info($(this).attr("class")),""==$(this).attr("class")&&$(this).closest("div.tile.no-img").addClass("no-icon")})}),$(".document-tiles").each(function(){var e=$(this);console.info("looking at caae tiles"),e.addClass("one-third")}),$("img:not(.loaded)").each(function(){$(this).addClass("loaded").removeAttr("width").removeAttr("height").css({height:"",width:""})}),$(".mediacore-video-container iframe").unwrap()}(jQuery),function($){$(document).ready(function(){null==localStorage.getItem("adminRoamView")?localStorage.setItem("adminRoamView","false"):"true"==localStorage.getItem("adminRoamView")&&($("html").addClass("admin-roam"),$("footer a#btnAdminToggle").addClass("active")),$("footer a#btnAdminToggle").click(function(){"true"==localStorage.getItem("adminRoamView")?(localStorage.setItem("adminRoamView","false"),$("html").removeClass("admin-roam"),$("body").css("padding-top","39px"),$("footer a#btnAdminToggle").toggleClass("active")):(localStorage.setItem("adminRoamView","true"),$("html").addClass("admin-roam"),$("body").css("padding-top","0px"),$("footer a#btnAdminToggle").toggleClass("active"))})})}(jQuery);
=======
/* Yale Case Studies base scripts.
 * Author: Square360
 * square360.com
 *	version 1.2
 */
 
// !----- Site Specific Custom JS parts -----

// @codekit-append "../../../ysm_cases/_assets/js/parts/page-layout.js";
// @codekit-append "../../../ysm_cases/_assets/js/parts/headers.js";
// @codekit-append "../../../ysm_cases/_assets/js/parts/jquery.highcharts.plotter.js"
// @codekit-append "../../../ysm_cases/_assets/js/parts/jquery.loadGallery.js"
// @codekit-append "../../../ysm_cases/_assets/js/arts/figures.js"
// @codekit-append "../../../ysm_cases/_assets/js/parts/browser-detect.js"

// @codekit-append "parts/document-tiles.js"
// @codekit-append "parts/case-tiles.js";

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

jQuery(document).ready(function($) {

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

	console.info(jQuery('div.show-sponsor').text());
	if(jQuery('div.show-sponsor').text() == '0'){ 
		jQuery('div.sponsor').hide(); 
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
			pageHeader.removeClass('closed').find('.primary-nav').height(0).show();
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
			var parseResult = $.parse(result,{header: false, dynamicTyping: true})
			console.info(parseResult);
			var chartArray = parseResult.results;

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
function convertDate(passedDate) {
	//see if the date is in string format or shitty Excel fake epoch date (days since Jan 1, 19)
	if (passedDate.toString().indexOf("/") > -1 ) {
		// converts the passed date string into an array
		var dateArray 	= passedDate.split('/'),
		// convert a date into a UTC date
		utcDate 	= new Date(Date.UTC(dateArray[2], dateArray[0]-1, dateArray[1]));
	} else {
		// this is a SHIT Excel date and we have to make a real date out of it
		utcDate 	= ExcelDateToJSDate(passedDate);
	}
	

	// returns the converted date into the unix time code
	return parseFloat(utcDate.getTime() / 1000.0 + '000');
}

function ExcelDateToJSDate(serial) {
	 var utc_days  = Math.floor(serial - 25569);
	 var utc_value = utc_days * 86400;                                        
	 var date_info = new Date(utc_value * 1000);

	 var fractional_day = serial - Math.floor(serial) + 0.0000001;

	 var total_seconds = Math.floor(86400 * fractional_day);

	 var seconds = total_seconds % 60;

	 total_seconds -= seconds;

	 var hours = Math.floor(total_seconds / (60 * 60));
	 var minutes = Math.floor(total_seconds / 60) % 60;

	 return new Date(date_info.getFullYear(), date_info.getMonth(), date_info.getDate(), hours, minutes, seconds);
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
     Begin browser-detect.js
********************************************** */

//detect ie8 and show modal to suggest chrome
jQuery(document).ready(function($){
	if ($('html.lt-ie9').length > 0){
		$.get( "/sites/all/themes/ysm_cases/_assets/partials/browser-detect.html", function( data ) {
			$('article.main-content').prepend(data);
		});
		
	}
});

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
				// disable page scroll
				$('html').css('overflow', 'hidden');

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

/* **********************************************
     Begin case-tiles.js
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
			tile.find('img').remove();
			tile.addClass('no-img'); //.find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-sq.gif');
		} 
	});
	//remove icon from tiles with no image and no icon-class
	$('.case-tiles .tile.no-img').each(function(){
		$(this).find('i').each(function(){
			console.info($(this).attr('class'));
			if ($(this).attr('class') == '') {
				$(this).closest('div.tile.no-img').addClass('no-icon');
			}
		});
	})


	// !Count number of tiles and set related width class
	$('.document-tiles').each(function(){
		var container = $(this);
		console.info('looking at caae tiles');
		container.addClass('one-third');

	});
	// !Responsive images
	$('img:not(.loaded)').each(function() {
		$(this).addClass('loaded').removeAttr('width').removeAttr('height').css({'height':'', 'width':''});
	});

	//Media Core iFrame unwrap
	$('.mediacore-video-container iframe').unwrap();
})(jQuery);
>>>>>>> f789049205ae66d96e37c27fb194ceaa0a0b80ca
