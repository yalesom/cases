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