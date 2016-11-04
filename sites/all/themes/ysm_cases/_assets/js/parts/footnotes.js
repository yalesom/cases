// JQuery page modifications for footnotes

jQuery(document).ready(function($) {
	//set the figure captions width to match the image
	$('#main-content').on('click','a[rel="footnote"]',function(e){

	var footnote = $($(this).attr('href')).offset();
		$('html, body').animate({
			 scrollTop: footnote.top - 120
	 }, 500);
	e.preventDefault();
 });

});
