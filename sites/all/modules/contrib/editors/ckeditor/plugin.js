
(function ($) {
  function loadScript(url) {
    var script = document.createElement('script');
    script.src = url;
    (document.body || document.head || document.documentElement).appendChild(script);
  }

  function GetURLParameter(sParam, sPageURL) {
    if(typeof sPageURL == 'undefined')
      return(null);

    sPageURL = sPageURL.substring(sPageURL.indexOf("?")+1);

    var sURLVariables = sPageURL.split('&');
    for (var i = 0; i < sURLVariables.length; i++) {
      var sParameterName = sURLVariables[i].split('=');
      if (sParameterName[0] == sParam) {
        return sParameterName[1];
      }
    }

    return(null);
  };

  // fn arg can be an object or a function, thanks to handleEvent
  // read more about the explanation at: http://www.thecssninja.com/javascript/handleevent
  function addEvt(el, evt, fn, bubble) {
      if ('attachEvent' in el) {
          // check if the callback is an object and contains handleEvent
          if (typeof fn == 'object' && fn.handleEvent) {
              el.attachEvent('on' + evt, function(){
                  // Bind fn as this
                  fn.handleEvent.call(fn);
              });
          } else {
              el.attachEvent('on' + evt, fn);
          }
      } else if ('addEventListener' in el) {
          // BBOS6 doesn't support handleEvent, catch and polyfill
          try {
              el.addEventListener(evt, fn, bubble);
          } catch(e) {
              if (typeof fn == 'object' && fn.handleEvent) {
                  el.addEventListener(evt, function(e){
                      // Bind fn as this and set first arg as event object
                      fn.handleEvent.call(fn,e);
                  }, bubble);
              } else {
                  throw e;
              }
          }
      }
  }

  CKEDITOR.plugins.add( 'warpwire', {

    requires : [],

    init: function( editor ) {

      var self = this;
      self.editor = editor;

      self.editor.path = this.path;

      pathArray = location.href.split( '/' );
      protocol = pathArray[0];
      host = pathArray[2];
      url = protocol + '//' + host;

      self.editor.baseUrl = url;

      // Add Button
      editor.ui.addButton( 'warpwire', {
        label: 'Warpwire',
        command: 'warpwire',
        icon: this.path + 'images/icon-warpwire-integration.gif'
      });

      // Add Command
      editor.addCommand( 'warpwire', {
        exec : function () {

          Drupal.settings.warpwire.pluginId = '';
          for (i = 0; i < 32; i++) {
            Drupal.settings.warpwire.pluginId += Math.floor(Math.random() * 16).toString(16);
          }
          var pluginId = Drupal.settings.warpwire.pluginId;

          addEvt(window, "message", function(ev) {
            if(Drupal.settings.warpwire.pluginId != pluginId)
              return(false);
            var parsedData = JSON.parse(ev.data);
            if (parsedData.message === "deliverResult") {
              var frames = JSON.parse(parsedData.result);
              for(var i=0; i < frames.length; i++) {
                var imgNode  = new CKEDITOR.dom.element('img');

                imgNode.setAttribute('class', "_ww_img");

                var img_src = frames[i]._ww_img.replace("http://","https://");
                var source = frames[i]._ww_src.replace("http://","https://");

                var sourceUrl = decodeURIComponent(source);
                sourceUrl = sourceUrl.replace(/^\[warpwire:/,'');
                sourceUrl = sourceUrl.replace(/]$/,'');

                var img_width = GetURLParameter('width', sourceUrl);
                if(img_width == null)
                  img_width = 400;
                imgNode.setAttribute('width', img_width);
                var img_height = GetURLParameter('height', sourceUrl);
                if(img_height == null)
                  img_height = 400;         
                imgNode.setAttribute('height', img_height);

                var sep = img_src.indexOf('?') == -1 ? '?' : '&';
                img_src = img_src + sep + 'ww_code=' + source;

                imgNode.setAttribute('src', img_src);

                if (frames[i]) {
                  try {
                  editor.insertElement(imgNode);
                  } catch(e){ }
                }
              }
              ev.data.message = '';
            }
          });

          var ww_defaults = {
            share: Drupal.settings.warpwire.warpwire_share_default,
            title: Drupal.settings.warpwire.warpwire_title_default,
            autoplay: Drupal.settings.warpwire.warpwire_autoplay_default,
          };

          var launch_url = Drupal.settings.warpwire.warpwire_url.replace(/(\/)+$/g,'')
            +"/w/all?pl=1&showSelector=1&externalContext=drupal&pluginLaunchReturnUrl="
            +encodeURIComponent(
            self.editor.baseUrl+self.editor.path+"html/warpwire.html")
            +"&pluginId=0";

          var launch_url_with_defaults = launch_url + "&warpwire_defaults=" + JSON.stringify(ww_defaults); 

          if(launch_url_with_defaults.length <= 2000)
            launch_url = launch_url_with_defaults;

          var child = window.open(self.editor.baseUrl+self.editor.path+"html/redirect.html?redirectURL="+encodeURIComponent(launch_url), '_wwPlugin', 'width=400, height=500');

          var leftDomain = false;
          var interval = setInterval(function() {
              try {
                  if (child.document.domain === document.domain)
                  {
                      if (leftDomain && child.document.readyState === "complete")
                      {
                          // we're here when the child window returned to our domain
                          clearInterval(interval);
                          child.postMessage({ message: "requestResult" }, "*");
                      }
                  }
                  else {
                      // this code should never be reached, 
                      // as the x-site security check throws
                      // but just in case
                      leftDomain = true;
                  }
              }
              catch(e) {
                  // we're here when the child window has been navigated away or closed
                  if (child.closed) {
                      clearInterval(interval);
                      return; 
                  }
                  // navigated to another domain  
                  leftDomain = true;
              }
          }, 500);

          return(true);
        }
      });
    }
  });

})(jQuery);
