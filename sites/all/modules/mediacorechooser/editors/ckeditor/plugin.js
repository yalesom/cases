
/**
 * @file Plugin for inserting MediaCore tags with mediacorechooser
 */
(function ($) {
    function loadScript(url) {
        var script = document.createElement('script');
        script.src = url;
        (document.body || document.head || document.documentElement).appendChild(script);
    }

    CKEDITOR.plugins.add( 'mediacorechooser', {

      requires : [],

      init: function( editor ) {

          var t = this;
          t.editor = editor;

          //var siteUrl = editor.config['mediacore_url'];
          var siteUrl = 'http://media.som.yale.edu';

          // Strip trailing slash to avoid chooser bug at //chooser
          if (siteUrl.lastIndexOf('/') == siteUrl.length - 1) {
            siteUrl = siteUrl.substring(0, siteUrl.length - 1);
          }

          loadScript(siteUrl + '/api/chooser.js');
          var params = {
              'url': siteUrl + '/chooser',
              'mode': 'popup'
          };

          // Add Button
          editor.ui.addButton( 'mediacorechooser', {
            label: 'MediaCore',
            command: 'mediacorechooser',
            icon: this.path + 'mcore-icon.png'
          });

          // Add Command
          editor.addCommand( 'mediacorechooser', {
            exec : function () {
                if (!window.mediacore) {
                    alert('mediacore.loaderror. Ensure you have the correct MediaCore URL.');
                    return;
                }
                if (!t.chooser) {
                    t.chooser = mediacore.chooser.init(params);
                    t.chooser.on('media', function(media) {
                        insert(media.public_url, t.editor);
                    });
                    t.chooser.on('error', function(err) {
                        throw err;
                    });
                }
                t.chooser.open();
            }
          });
      }
    });

    function insert(url, editor) {
      var selection = editor.getSelection(),
          ranges    = selection.getRanges(),
          range, textNode;

      editor.fire( 'saveSnapshot' );

      var str = '[mediacore:' + url + ']';


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
