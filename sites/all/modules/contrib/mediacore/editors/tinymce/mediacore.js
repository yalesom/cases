(function ($) {
tinyMCEPopup.requireLangPack();

var MediaCoreDialog = {

	insert : function(file, width, height) {
		var ed = tinyMCEPopup.editor, dom = ed.dom;
		var shortcode = '[mediacore:' + file + ']';
		tinyMCEPopup.execCommand('mceInsertContent', false, shortcode);
		tinyMCEPopup.close();
	}
};

tinyMCEPopup.onInit.add(MediaCoreDialog);

$(document).ready(function() {

  $('a.add').click(function(){
    var url = $(this).attr('data-url');
    MediaCoreDialog.insert(url);
    return false;
  });
  
});

})(jQuery);