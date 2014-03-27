jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('img.has-caption').each(function(){
		var thisIMG = $(this);
		var classString = 'figure';
		if (thisIMG.css('float') != undefined ) { classString += ' figure-' + thisIMG.css('float')};
		//console.info(classString);
		var styleString = 'width: ' + thisIMG.width() + 'px';

		var figureDOM = "<figure class='" + classString +"' style='" + styleString + "'></figure>";
		//console.info(figureDOM);
		thisIMG.wrap(figureDOM);
		
		var captionDOM = '<figcaption>' + thisIMG.attr('alt') + '</figcaption>';
		thisIMG.parent('figure').append(captionDOM);
	});
});