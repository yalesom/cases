/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if (typeof (CKEDITOR) !== 'undefined') {
  CKEDITOR.config.image2_alignClasses = ['align-left', 'align-wide', 'align-right'];
  CKEDITOR.config.image2_captionedClass = 'captionedImage';

  CKEDITOR.addStylesSet('drupal', [

    { name: 'Paragraph', element: 'p' },
    { name: 'Heading 2', element: 'h2' },
    { name: 'Heading 3', element: 'h3' },
    { name: 'Heading 4', element: 'h4' },
    { name: 'Heading 5', element: 'h5' },
    { name: 'Heading 6', element: 'h6' },

    /*{
            name : 'Image on Left',
            type: 'widget', widget: 'image',
            attributes :
            {
                    'class' : 'inline-image left',
                    'align' : '',
                    'style' : ''
            }
    },

    {
            name : 'Image on Right',
            type: 'widget', widget: 'image',
            attributes :
            {
                    'class' : 'inline-image right',
                    'align' : '',
                    'style' : ''
            }
    },

    {
            name : 'Image Center',
            type: 'widget', widget: 'image',
            attributes :
            {
                    'class' : 'inline-image wide',
                    'align' : '',
                    'style' : ''
            }
    }*/

  ]);
}
