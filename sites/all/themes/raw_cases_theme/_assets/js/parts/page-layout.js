// !Identify desktop devices
var mobile = IsMobile.detect();
if (!mobile) {
  jQuery('html').addClass('desktop');
} else {
  jQuery('html').addClass('mobile');
};

// !Page resize
function pageResize() {
  // ! Move navigation container based on document width
  if (document.body.clientWidth <= 568 && mobile) {
    jQuery('.primary-nav > .block-views').height(window.innerHeight);
  }
};

jQuery(document).ready(function ($) {
  //unwrap all embeded iframes
  jQuery('.video-container, .html-embedded-content-container')
    .not('.tile-wrapper')
    .find('p>iframe')
    .unwrap();

  if (jQuery('div.show-sponsor').text() == 'hide') {
    jQuery('div.sponsors').hide();
  }

});

// !Call resize
jQuery(window).bind("resize orientationchange", pageResize);
