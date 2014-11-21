// JQuery page modifications for figures with images and captions

jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('.field-name-body figure').each(function(){
		var thisIMG = $(this).find('img');

		console.info(thisIMG);
		var styleString = ' ; width: ' + thisIMG.width() + 'px;';

		//$(this).attr('width',styleString);

		//find float info
		if ($(this).attr('style') == 'float:left') {
			$(this).addClass('left');
			console.info(styleString);
			$(this).attr('style', $(this).attr('style') + styleString);
		}
		if ($(this).attr('style') == 'float:right') {
			$(this).addClass('right');
			$(this).attr('style', $(this).attr('style') + styleString);
		}
	});
});