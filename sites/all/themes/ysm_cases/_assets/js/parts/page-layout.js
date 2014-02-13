//(function($) {
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
//})(jQuery);