
/**
 * @file mediacoreinsert ckeditor dialog helper
 */

var mediacoreinsert_dialog = {};
(function ($) {
mediacoreinsert_dialog = {
  init : function() {

    //Get CKEDITOR
    CKEDITOR = dialogArguments.opener.CKEDITOR;
    //Get the current instance name
    var name = dialogArguments.editorname;
    //Get the editor instance
    editor = CKEDITOR.instances[name];
  },

  insert : function(url) {   
    // Get the params from the form
    var params = []
    params['file_url'] = url;

    //If no file url, just close this window
    if(params.file_url == "") {
      window.close();
    }
    else {      
      CKEDITOR.tools.callFunction(editor._.mediacoreinsertFnNum, params, editor);   
      window.close();
    }
  },
  

};

$(document).ready(function() {
  var CKEDITOR, editor;
  
  mediacoreinsert_dialog.init();

  $('a.add').click(function(){
    var url = $(this).attr('data-url');
    mediacoreinsert_dialog.insert(url);
    return false;
  });


});

})(jQuery);






