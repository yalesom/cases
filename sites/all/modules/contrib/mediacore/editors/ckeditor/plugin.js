
/**
 * @file Plugin for inserting MediaCore tags with mediacoreinsert
 */
(function ($) {
  CKEDITOR.plugins.add( 'mediacoreinsert', {

    requires : [],

    init: function( editor ) {
      
      // Add Button
      editor.ui.addButton( 'mediacoreinsert', {
        label: 'MediaCore Insert',
        command: 'mediacoreinsert',
        icon: this.path + 'mcore-icon.png'
      });
      // Add Command
      editor.addCommand( 'mediacoreinsert', {
        exec : function () {
          var path = (Drupal.settings.mediacoreinsert.url.wysiwyg_ckeditor) ? Drupal.settings.mediacoreinsert.url.wysiwyg_ckeditor : Drupal.settings.mediacoreinsert.url.ckeditor
          var media = window.showModalDialog(path, { 'opener' : window, 'editorname' : editor.name }, "dialogWidth:460px; dialogHeight:470px; center:yes; resizable:yes; help:no;");
        }
      });
      
      // Register an extra fucntion, this will be used in the popup.
      editor._.mediacoreinsertFnNum = CKEDITOR.tools.addFunction( insert, editor );
    }
    
  });

  function insert(params, editor) {
    var selection = editor.getSelection(),
			ranges	  = selection.getRanges(),
			range, textNode;

    editor.fire( 'saveSnapshot' );

    var str = '[mediacore:' + params.file_url + ']';
    

    for ( var i = 0, len = ranges.length ; i < len ; i++ )
    {
      range = ranges[ i ];
      range.deleteContents();

      textNode = CKEDITOR.dom.element.createFromHtml( str );
      range.insertNode( textNode );
    }

    range.moveToPosition( textNode, CKEDITOR.POSITION_AFTER_END );
    range.select();

    editor.fire( 'saveSnapshot' );
  }

})(jQuery);
