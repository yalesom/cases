//detect ie8 and show modal to suggest chrome
jQuery(document).ready(function($){
	if ($('html.lt-ie9').length > 0){
		$.get( "/sites/all/themes/ysm_cases/_assets/partials/browser-detect.html", function( data ) {
			$('article.main-content').prepend(data);
		});
		
	}
});