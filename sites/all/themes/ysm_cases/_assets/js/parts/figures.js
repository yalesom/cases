jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('figure figcaption').each(function(){
		this.width(this.prev().width());
	});
});