(function($) {
	/*
	* Case tile scripts
	*/

	// !Reposition toplevel book in case outline to section list
	$('.case-title .view-content a').each(function(){
		$(this).prependTo( $(this).parentsUntil('.case-menu').parent().find('.stem_class').first() ).wrap('<li class="case-title"/>');
	});
	// !Add blank images to case study tiles without a src
	$('.case-tiles .tile').each(function(){
		var tile = $(this);
		if ( tile.find('img').attr('src') == ''){
			tile.addClass('no-img')
		}
		if ( tile.hasClass('small') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-s.gif');
		} else if ( tile.hasClass('medium') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-m.gif');
		} else if ( tile.hasClass('large') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-l.gif');
		} else if ( tile.hasClass('xlarge') && tile.find('img').attr('src') == ''){
			$(this).find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-xl.gif');
		}
		
	});
	// !Add blank images to case study tiles without a src
	$('.document-tiles .tile').each(function(){
		var tile = $(this);
		if ( tile.find('img').attr('src') == ''){
			tile.addClass('no-img').find('img').attr('src','/sites/all/themes/ysm_cases/_assets/images/blank-sq.gif');
		} 
	});
	//remove icon from tiles with no image and no icon-class
	$('.case-tiles .tile.no-img').each(function(){
		$(this).find('i').each(function(){
			console.info($(this).attr('class'));
			if ($(this).attr('class') == '') {
				$(this).closest('div.tile.no-img').addClass('no-icon');
			}
		});
	})


	// !Count number of tiles and set related width class
	// $('.document-tiles').each(function(){
	// 	var container = $(this);
	// 	container.addClass('processed');
	// 	if ( container.find('.view-content').children().length == 1 ){
	// 		container.addClass('one-sixth');
	// 	} else if ( container.find('.view-content').children().length == 2 ){
	// 		container.addClass('one-third');
	// 	} else if( container.find('.view-content').children().length > 2 ){
	// 		container.addClass('one-half');
	// 	}
	// });

	// read the first tile and checks it's classes
	$('.document-tiles').each(function() {
		var container = $(this);

		container.addClass('processed');

		if (container.find('.view-content .tile').first().hasClass('tile-1of1')) {
			container.addClass('one-sixth');	
		
		} else if (container.find('.view-content .tile').first().hasClass('tile-1of2')) {
			container.addClass('one-third');

		} else if (container.find('.view-content .tile').first().hasClass('tile-1of3')) {
			container.addClass('one-half');
		}
	});

	// !Responsive images
	$('.case-tiles img:not(.loaded)').each(function() {
		$(this).addClass('loaded').removeAttr('width').removeAttr('height').css({'height':'', 'width':''});
	});

	//Media Core iFrame unwrap
	$('.mediacore-video-container iframe').unwrap();
})(jQuery);