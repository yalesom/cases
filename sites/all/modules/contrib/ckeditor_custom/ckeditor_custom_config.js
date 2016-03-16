/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/
CKEDITOR.editorConfig = function( config )
{
  // config.styleSet is an array of objects that define each style available
  // in the font styles tool in the ckeditor toolbar
  config.stylesSet =
  [
        /* Block Styles */

        // Each style is an object whose properties define how it is displayed
        // in the dropdown, as well as what it outputs as html into the editor
        // text area.
        { name : 'Paragraph'   , element : 'p' },
        { name : 'Heading 2'   , element : 'h2' },
        { name : 'Heading 3'   , element : 'h3' },
        { name : 'Heading 4'   , element : 'h4' },
        { name : 'Heading 5'   , element : 'h5' },
        { name : 'Heading 6'   , element : 'h6' },
        { name : 'Figure Right', element : 'figure', attributes : { 'style' : 'float:right;margin:0 0 1rem 1rem;' } },
        { name : 'Figure Left', element : 'figure', attributes : { 'style' : 'float:left;margin:0 1rem 1rem 0;' } },
        { name : 'Preformatted', element : 'pre' },
        { name : 'Caption', element : 'figcaption' },
  ];

}
CKEDITOR.config.allowedContent = true;