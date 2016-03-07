
(function ($) {
  function loadScript(url) {
    var script = document.createElement('script');
    script.src = url;
    (document.body || document.head || document.documentElement).appendChild(script);
  }

  function isIE() {
    var ua = window.navigator.userAgent;
    var msie = ua.indexOf('MSIE ');
    var trident = ua.indexOf('Trident/');
    
    // is internet explorer
    if (msie > 0 || trident > 0)
      return(true);
    
    // other browser
    return false; 
  };

  function createCORSRequest(method, url){
      var xhr = new XMLHttpRequest();
      if ("withCredentials" in xhr){
          xhr.open(method, url, true);
      } else if (typeof XDomainRequest != "undefined"){
          xhr = new XDomainRequest();
          xhr.open(method, url);
      } else {
          xhr = null;
      }
      return xhr;
  }

  // fn arg can be an object or a function, thanks to handleEvent
  // read more about the explanation at: http://www.thecssninja.com/javascript/handleevent
  function addEvt(el, evt, fn, bubble) {
      if ('addEventListener' in el) {
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
      } else if ('attachEvent' in el) {
          // check if the callback is an object and contains handleEvent
          if (typeof fn == 'object' && fn.handleEvent) {
              el.attachEvent('on' + evt, function(){
                  // Bind fn as this
                  fn.handleEvent.call(fn);
              });
          } else {
              el.attachEvent('on' + evt, fn);
          }
      }
  }

  function checkIEGet(editor, pluginId, checkGetCounter) {
                          
    if(checkGetCounter >= 10) {
      return(false);
    }
                            
    var xmlhttp = createCORSRequest("GET", Drupal.settings.warpwire.warpwire_url.replace(/(\/)+$/g,'')+'/api/staging/c/'+pluginId+'/o/'+pluginId);
    
    if (xmlhttp){
      xmlhttp.onload = function(){
        var frames = JSON.parse(xmlhttp.responseText);
        for(var i=0; i < frames.length; i++) {
          imgNode  = new CKEDITOR.dom.element('img');

          imgNode.setAttribute('class', "_ww_img");
          imgNode.setAttribute('longdesc', frames[i]._ww_src.replace("http://","https://"));
          imgNode.setAttribute('src', frames[i]._ww_img.replace("http://","https://"));
          
          if (editor.mode === 'wysiwyg' && frames[i]) {
            editor.insertElement(imgNode);
          }
        }
        
        return(true);
      };
      xmlhttp.onerror = function(){
        checkGetCounter = checkGetCounter + 1;
        setTimeout(checkIEGet(editor, pluginId, checkGetCounter),1000);
      };
      xmlhttp.send();
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

          addEvt(window, "message", function(ev) {
              if (ev.data.message === "deliverResult") {
                var frames = JSON.parse(ev.data.result);
                for(var i=0; i < frames.length; i++) {
                  imgNode  = new CKEDITOR.dom.element('img');

                  imgNode.setAttribute('class', "_ww_img");
                  imgNode.setAttribute('longdesc', frames[i]._ww_src.replace("http://","https://"));
                  imgNode.setAttribute('src', frames[i]._ww_img.replace("http://","https://"));
                  
                  if (editor.mode === 'wysiwyg' && frames[i]) {
                    editor.insertElement(imgNode);
                  }
                }
                ev.data.message = '';
              }
          });

          var pluginId = "";
          var checkGetCounter = 0;
          if(isIE()) {
            for (i = 0; i < 32; i++) {
              pluginId += Math.floor(Math.random() * 16).toString(16);
            }
          } else {
            pluginId = "0";
          }

          var child = window.open(Drupal.settings.warpwire.warpwire_url.replace(/(\/)+$/g,'')+"/w/all?pl=1&showSelector=1&externalContext=drupal&pluginLaunchReturnUrl="+encodeURIComponent(self.editor.baseUrl+self.editor.path+"html/warpwire.html")+"&pluginId="+pluginId,'_wwPlugin','width=400, height=500');

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
                      // if IE, we are using a GET method rather than a window listener
                      if(isIE()) {
                        var checkGet = checkIEGet(editor, pluginId, 0);
                      }
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
