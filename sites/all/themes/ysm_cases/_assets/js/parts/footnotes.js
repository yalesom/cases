// JQuery page modifications for footnotes

jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('#main-content').on('click','a[rel="footnote"], li[data-footnote-id] a',function(e){

	var footnote = $(this).attr('href'),
		f_offset = $(footnote).offset();
	// location.hash = footnote;
		$('html, body').animate({
			 scrollTop: f_offset.top - 120
	 }, 500);
	e.preventDefault();
 });

});
