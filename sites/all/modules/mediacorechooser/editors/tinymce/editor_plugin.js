/**
 * @author MediaCore <info@mediacore.com>
 */

(function() {
    function loadScript(url) {
        var script = document.createElement('script');
        script.src = url;
        (document.body || document.head || document.documentElement).appendChild(script);
    }

    tinymce.PluginManager.requireLangPack('mediacore');

    tinymce.create('tinymce.plugins.mediacorechooser', {
        init : function(ed, pluginUrl) {
            var t = this;
            t.editor = ed;
            t.url = pluginUrl;

            loadScript(ed.getParam('mediacore_url') + '/api/chooser.js');
            var params = {
                'url': ed.getParam('mediacore_url') + '/chooser',
                'mode': 'popup'
            };

            ed.addCommand('mceMediaCore', function() {
                if (!window.mediacore) {
                    ed.windowManager.alert(
                        ed.getLang('mediacore.loaderror. Ensure you have the correct MediaCore URL.')
                    );
                    return;
                }
                if (!t.chooser) {
                    t.chooser = mediacore.chooser.init(params);
                    t.chooser.on('media', function(media) {
                        var elem = t.editor.dom.createHTML(
                            'p', undefined, '[mediacore:'+ media.public_url + ']');
                        t.editor.execCommand('mceInsertContent', false, elem);
                    });
                    t.chooser.on('error', function(err) {
                        throw err;
                    });
                }
                t.chooser.open();
            });

            ed.addButton('mediacorechooser', {
                title : 'MediaCore',
                image : t.url + '/mcore-icon.png',
                cmd : 'mceMediaCore'});

        },

        getInfo : function() {
            return {
                longname : 'MediaCore Media',
                author : 'MediaCore <info@mediacore.com>',
                authorurl: 'http://mediacore.com',
                version : "2.0"
            };
        }

    });

    tinymce.PluginManager.add('mediacorechooser', tinymce.plugins.mediacorechooser);
})();
