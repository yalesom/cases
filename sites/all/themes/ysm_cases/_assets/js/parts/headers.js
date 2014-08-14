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