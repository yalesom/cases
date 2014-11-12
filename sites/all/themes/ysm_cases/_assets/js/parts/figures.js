// JQuery page modifications for figures with images and captions

jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('.field-name-body figure').each(function(){
		var thisIMG = $(this).find('img');

		console.info(thisIMG);
		var styleString = thisIMG.width() + 'px';

		$(this).attr('width',styleString);

		//find float info
		if ($(this).attr('style') == 'float:left') {
			$(this).addClass('left');
		}
		if ($(this).attr('style') == 'float:right') {
			$(this).addClass('right');
		}
	});
});