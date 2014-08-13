function pageResize(){document.body.clientWidth<=568&&mobile&&jQuery(".primary-nav > .block-views").height(window.innerHeight)}function resizeHeader(){document.body.clientWidth<=568&&mobile?(jQuery(".primary-nav > .block-views").height(window.innerHeight),jQuery("#page-wrapper").toggleClass("open")):(pageHeader=jQuery("#page-header"),pageHeader.hasClass("closed")?(oneAtATime=!0,pageHeader.removeClass("closed").find(".primary-nav").height(0).show(),headerHeight=pageHeader.find(".section-wrap").outerHeight(!0)+pageHeader.find(".primary-nav > .block").outerHeight(!0),navHeight=pageHeader.find(".primary-nav > .block").outerHeight(!0)):(oneAtATime=!1,headerHeight=pageHeader.find(".section-wrap").outerHeight(!0)-pageHeader.find(".primary-nav > .block").outerHeight(!0),navHeight=0,pageHeader.addClass("closed")),headerHeight>jQuery(window).height()&&(headerHeight=jQuery(window).height(),navHeight=jQuery(window).height()-pageHeader.find(".header-main").outerHeight(!0)),pageHeader.parent().animate({height:headerHeight},500,"easeInOutQuad"),pageHeader.find(".primary-nav").animate({height:navHeight},500,"easeInOutQuad",function(){jQuery(".touch #page-header .primary-nav").css("overflow","scroll")}))}function scrollableElement(e){for(var t=0,a=arguments.length;a>t;t++){var r=arguments[t],o=jQuery(r);if(o.scrollTop()>0)return r;o.scrollTop(1);var i=o.scrollTop()>0;if(o.scrollTop(0),i)return r}return[]}function readInChartCSV(){var $=jQuery;$.ajax({url:chartContainer.data("src"),type:"get",dataType:"text",success:function(e){var t=$.parse(e,{header:!1,dynamicTyping:!0});console.info(t);var a=t.results;switch($("#chart-data").html(e),chartContainer.data("charttype")){case"line":case"bar":case"column":genericChartParser(a,chartContainer);break;case"pie":pieChartParser(a,chartContainer);break;case"stock":stockChartParser(a,chartContainer)}},error:function(e){console.log(e.status+" "+e.statusText)}})}function convertDate(e){if(e.toString().indexOf("/")>-1)var t=e.split("/"),a=new Date(Date.UTC(t[2],t[0]-1,t[1]));else a=ExcelDateToJSDate(e);return parseFloat(a.getTime()/1e3+"000")}function ExcelDateToJSDate(e){var t=Math.floor(e-25569),a=86400*t,r=new Date(1e3*a),o=e-Math.floor(e)+1e-7,i=Math.floor(86400*o),n=i%60;i-=n;var s=Math.floor(i/3600),l=Math.floor(i/60)%60;return new Date(r.getFullYear(),r.getMonth(),r.getDate(),s,l,n)}function convertStringToID(e){return e.toLowerCase().replace(/\s+/g,"-")}function genericChartParser(e){for(var $=jQuery,t={},a=e[0],r=[],o=[],i=0,n=1;n<e.length;n++){o=[],r[i]={name:e[n][0]};for(var s=1;s<a.length;s++)o[s-1]=parseFloat(e[n][s]);r[i].data=o,i++}t.categories=a.slice(1),t.series=r,genericChartPlotter(t,chartContainer)}function genericChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts({chart:{type:t.charttype},title:{text:t.title},subtitle:{text:t.subtitle},xAxis:{categories:e.categories},yAxis:{title:{text:t.yaxis}},tooltip:{enabled:t.showtooltip,valueSuffix:t.tooltipvalue},legend:{enabled:t.showlegend,layout:"vertical",align:"right",verticalAlign:"middle",borderWidth:0},plotOptions:{line:{dataLabels:{enabled:t.showdatalabels},enableMouseTracking:t.enablemousetracking},column:{stacking:t.stackvalues===!0?"normal":"",dataLabels:{enabled:t.showdatalabels,color:t.stackvalues===!0?"white":Highcharts.theme&&Highcharts.theme.dataLabelsColor},enableMouseTracking:t.enablemousetracking},bar:{stacking:t.stackvalues===!0?"normal":"",dataLabels:{enabled:t.showdatalabels,color:t.stackvalues===!0?"white":Highcharts.theme&&Highcharts.theme.dataLabelsColor},enableMouseTracking:t.enablemousetracking}},colors:highchartColors,series:e.series})}function pieChartParser(e){for(var $=jQuery,t=[],a=0;a<e.length;a++)t[a]=[e[a][0],parseFloat(e[a][1])];pieChartPlotter(t,chartContainer)}function pieChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts({chart:{plotBackgroundColor:null,plotBorderWidth:null,plotShadow:!1},title:{text:t.title},subtitle:{text:t.subtitle},tooltip:{enabled:t.showtooltip,pointFormat:"{series.name}: <b>{point.percentage:.1f}%</b>"},plotOptions:{pie:{allowPointSelect:t.enablesliceclick,cursor:"pointer",dataLabels:{enabled:t.showdatalabels,color:"#000000",connectorColor:"#000000",format:"<b>{point.name}</b>: {point.percentage:.1f} %"},showInLegend:t.showlegend}},series:[{type:"pie",data:e}]})}function stockChartParser(e){for(var $=jQuery,t=e[0],a=[],r=[],o=0,i=1;i<e.length;i++){r=[],a[o]={name:e[i][0],id:e[i][0].toLowerCase().replace(/\s+/g,"-")};for(var n=1;n<t.length;n++)r[n-1]=[convertDate(t[n]),parseFloat(e[i][n])];a[o].data=r,o++}$("#flags").length&&(flags=JSON.parse("["+$("#flags").html()+"]"),$.each(flags,function(e,t){t.onSeries=convertStringToID(t.onSeries),$.each(flags[e].data,function(e,t){t.x=parseInt(t.x+"000")})}),a=a.concat(flags)),stockChartPlotter(a,chartContainer)}function stockChartPlotter(e){var t=chartContainer.data();chartContainer.highcharts("StockChart",{title:{text:t.title},subtitle:{text:t.subtitle},rangeSelector:{selected:5},tooltip:{valueDecimals:2},series:e})}function loadGallery(){var $=jQuery,e=galleryContainer.data(),t=$(".bxslider").bxSlider({mode:e.transitionmode,captions:e.showcaptions,auto:e.autoplay,controls:e.showcontrols,autoHover:e.pauseonhover,pause:e.transitiondelay,adaptiveHeight:e.adaptiveheight,autoControls:e.showplaypause,autoControlsCombine:!0,onSliderLoad:function(){console.log("loaded")}});return t}var mobile=IsMobile.detect();jQuery("html").addClass(mobile?"mobile":"desktop"),jQuery(document).ready(function($){jQuery("#edit-cas-login-redirection-message").appendTo("form#user-login-form"),jQuery("div.form-item-cas-identifier").appendTo("form#user-login-form"),jQuery("#edit-cas-identifier").change(function(){jQuery(this).is(":checked")?(jQuery("#user-login-form .form-item-name").fadeOut(250),jQuery("#user-login-form .form-item-pass").fadeOut(250)):(jQuery("#user-login-form .form-item-name").fadeIn(250),jQuery("#user-login-form .form-item-pass").fadeIn(250))}),console.info(jQuery("div.show-sponsor").text()),"0"==jQuery("div.show-sponsor").text()&&jQuery("div.sponsor").hide()}),jQuery(window).bind("resize orientationchange",pageResize);var headerHeight,navHeight,pageHeader;jQuery(".primary-nav .view-book-outline a").bind("click touch",function(e){e.stopPropagation()}),jQuery(".toolbar #page-header").waypoint("sticky",{offset:function(){return jQuery("#toolbar").height()}}),jQuery("#page-header").not(".toolbar #page-header").waypoint("sticky");var oneAtATime=!0;jQuery(".node-type-book #main-content").waypoint(function(e){if("down"===e&&oneAtATime){oneAtATime=!1,resizeHeader(),jQuery(".node-type-book #main-content").waypoint("disable");var t=window.setTimeout(function(){jQuery(".node-type-book #main-content").waypoint("enable")},200)}"up"!==e||oneAtATime||(oneAtATime=!0,resizeHeader(),jQuery(scrollElem).animate({scrollTop:0},500,"easeInOutQuad",function(){jQuery("#page-header").removeClass("overlay")}))},{offset:function(){return jQuery("#page-header .section-wrap").outerHeight(!0)-2+jQuery("#toolbar").height()}}),document.body.clientWidth<=568&&mobile&&(jQuery("body").addClass("phone"),jQuery("#page-header .primary-nav").prependTo(jQuery("#page-wrapper")),jQuery(".node-type-book #main-content").waypoint("disable")),jQuery("#page-header .primary-nav").height(jQuery("#page-header .primary-nav > .block").outerHeight(!0)),jQuery("#page-header").parent().height(jQuery("#page-header .section-wrap").outerHeight(!0)),jQuery("#page-header").not(".node-type-book  #page-header").addClass("overlay").addClass("closed"),jQuery(".logged-in #page-header, .logged-in .primary-nav").bind("touch click",function(){resizeHeader()}),jQuery("#page-header .section-wrap").append('<i class="icon-remove"></i>'),jQuery("#page-header .icon-cancel").bind("touch click",function(){resizeHeader()}),jQuery(".user-login #edit-name").attr("placeholder","Username"),jQuery(".user-login #edit-pass").attr("placeholder","Password"),jQuery(".user-login #edit-submit").remove(),jQuery(".user-login #edit-actions").append('<button type="submit" id="edit-submit" class="form-submit" name="op">Login</button>');var adminSticky=window.setTimeout(function(){jQuery(".toolbar #page-header").css("top",jQuery("body.toolbar").css("padding-top"))},200),scrollElem=scrollableElement("html","body");jQuery(".scrolltoTop").click(function(e){e.preventDefault(),jQuery(scrollElem).animate({scrollTop:0},400)});var highchartColors=["#00457c","#c9b579","#3775a4","#bf6f6f","#42889b","#b242ae","#79ba86","#5d94be","#eee256"],chartContainer="",galleryContainer;jQuery(document).ready(function($){$("html.lt-ie9").length>0&&$.get("/sites/all/themes/ysm_cases/_assets/partials/browser-detect.html",function(e){$("article.main-content").prepend(e)})}),jQuery(document).ready(function($){$(".view-document-grid").find(".tile").each(function(){$(this).find("a").click(function(e){e.preventDefault(),$("html").css("overflow","hidden");var t=$(this).attr("href"),a,r,o;if("-1"==t.indexOf(location.host)||t.indexOf("files")>0)window.open(t);else{if($(this).hasClass("in-use"))return!1;a=$("#template").clone(),uid=Math.floor(100*Math.random())+1,r="tile-"+uid,buttonID="button-"+uid,$(this).attr("id",buttonID),$(this).attr("class","in-use"),a.attr("id",r),$("#main-content").before(a),setTimeout(function(){$("#"+r).addClass("open")},500),$("#"+r+" .tile-target").load(t+" .tile-content",function(e,t,a){if("success"==t){switch(o=$("#"+$("#"+r).find(".tile-content").attr("id")),$("html, body").animate({scrollTop:$("#"+r).offset().top+$("#page-header").height},1e3),$("#"+r).find(".tile-content").attr("class").split(" ")[0]){case"chart-container":chartContainer=$("#"+$(this).find(".chart-target").attr("id")),readInChartCSV();break;case"gallery-container":galleryContainer=o,mySlider=loadGallery();break;case"mediacore-video-container":$("#"+r).find("iframe").unwrap();break;case"sheetnode-container":var i=o.data("nid"),n={},s=o.find("#sheetnode-value").html();n["sheetnode-"+i]={aliases:["sheetnode"],containerElement:"sheetnode-"+i,context:{"entity-name":"node",oid:'"'+i+'"'},imagePrefix:"/sites/all/modules/sheetnode/socialcalc/images/sc-",permissions:{"edit sheetnode settings":!0},saveElement:!1,showToolbar:0,value:s,viewMode:"2"},Drupal.settings.sheetnode=n,Drupal.behaviors.sheetnode.attach("#sn-container-"+i,Drupal.settings)}$("#"+r+" .tile-wrapper").css("background","none")}})}})}),$(document).on("click",".modal-close",function(e){e.preventDefault(),$("#button-"+$(this).closest(".modal").attr("id").split("-")[1]).removeClass("in-use"),$(this).closest(".modal").remove(),$("html").css("overflow","auto")})}),function($){$(".case-title .view-content a").each(function(){$(this).prependTo($(this).parentsUntil(".case-menu").parent().find(".stem_class").first()).wrap('<li class="case-title"/>')}),$(".case-tiles .tile").each(function(){var e=$(this);""==e.find("img").attr("src")&&e.addClass("no-img"),e.hasClass("small")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-s.gif"):e.hasClass("medium")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-m.gif"):e.hasClass("large")&&""==e.find("img").attr("src")?$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-l.gif"):e.hasClass("xlarge")&&""==e.find("img").attr("src")&&$(this).find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-xl.gif")}),$(".document-tiles .tile").each(function(){var e=$(this);""==e.find("img").attr("src")&&e.addClass("no-img").find("img").attr("src","/sites/all/themes/ysm_cases/_assets/images/blank-sq.gif")}),$(".case-tiles .tile.no-img").each(function(){$(this).find("i").each(function(){console.info($(this).attr("class")),""==$(this).attr("class")&&$(this).closest("div.tile.no-img").addClass("no-icon")})}),$(".document-tiles").each(function(){var e=$(this);console.info("looking at caae tiles"),e.addClass("one-third")}),$("img:not(.loaded)").each(function(){$(this).addClass("loaded").removeAttr("width").removeAttr("height").css({height:"",width:""})}),$(".mediacore-video-container iframe").unwrap()}(jQuery),function($){$(document).ready(function(){null==localStorage.getItem("adminRoamView")?localStorage.setItem("adminRoamView","false"):"true"==localStorage.getItem("adminRoamView")&&($("html").addClass("admin-roam"),$("footer a#btnAdminToggle").addClass("active")),$("footer a#btnAdminToggle").click(function(){"true"==localStorage.getItem("adminRoamView")?(localStorage.setItem("adminRoamView","false"),$("html").removeClass("admin-roam"),$("body").css("padding-top","39px"),$("footer a#btnAdminToggle").toggleClass("active")):(localStorage.setItem("adminRoamView","true"),$("html").addClass("admin-roam"),$("body").css("padding-top","0px"),$("footer a#btnAdminToggle").toggleClass("active"))})})}(jQuery);