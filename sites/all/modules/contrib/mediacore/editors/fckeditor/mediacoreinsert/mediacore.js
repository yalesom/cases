
var dialog	= window.parent ;
var oEditor = dialog.InnerDialogLoaded() ;

var FCK			  = oEditor.FCK ;

dialog.SetAutoSize( true ) ;

// Activate the "OK" button.
dialog.SetOkButton( true ) ;

(function ($) {
  $(document).ready(function() {

  $('a.add').click(function(){
    var url = $(this).attr('data-url');
    insertCode(url);
    return false;
  });
  
  });
})(jQuery);

function insertCode(url) {
  var sInnerHtml ;
  (function ($) {

    if(url == "") {
      dialog.Cancel();
    }

    var str = '[video:' + url + ']';

    oEditor.FCKUndo.SaveUndoStep();

    var text = oEditor.FCK.InsertHtml(str);
   })(jQuery);
   return true ;
}


