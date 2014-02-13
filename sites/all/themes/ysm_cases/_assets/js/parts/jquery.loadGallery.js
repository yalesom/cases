var galleryContainer;

function loadGallery() {
	var $ 			= jQuery,
		options 	= galleryContainer.data(),
		mySlider	= $('.bxslider').bxSlider({
						mode: options.transitionmode,
						captions: options.showcaptions,
						auto: options.autoplay,
						controls: options.showcontrols,
						autoHover: options.pauseonhover,
						pause: options.transitiondelay,
						adaptiveHeight: options.adaptiveheight,
						autoControls: options.showplaypause,
						autoControlsCombine: true,
						onSliderLoad: function() {
							console.log('loaded')
						}
					});
		return mySlider;
}