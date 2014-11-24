/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
   	CKEDITOR.config.image2_alignClasses = [ 'align-left', 'align-wide', 'align-right' ];
   	CKEDITOR.config.image2_captionedClass = 'captionedImage';
   	
    CKEDITOR.addStylesSet( 'drupal',
    [

            { name : 'Paragraph'		, element : 'p' },
            { name : 'Heading 2'		, element : 'h2' },
            { name : 'Heading 3'		, element : 'h3' },
            { name : 'Heading 4'		, element : 'h4' },
            { name : 'Heading 5'		, element : 'h5' },
            { name : 'Heading 6'		, element : 'h6' },
            /*
            { name : 'Preformatted Text', element : 'pre' },
            { name : 'Address'			, element : 'address' },
            */

            /* Inline Styles */

            // These are core styles available as toolbar buttons. You may opt enabling
            // some of them in the "Styles" drop-down list, removing them from the toolbar.
            /*
            { name : 'Strong'			, element : 'strong', overrides : 'b' },
            { name : 'Emphasis'			, element : 'em'	, overrides : 'i' },
            { name : 'Underline'		, element : 'u' },
            { name : 'Strikethrough'	, element : 'strike' },
            { name : 'Subscript'		, element : 'sub' },
            { name : 'Superscript'		, element : 'sup' },
            */
            /*
            { name : 'Marker: Yellow'	, element : 'span', styles : { 'background-color' : 'Yellow' } },
            { name : 'Marker: Green'	, element : 'span', styles : { 'background-color' : 'Lime' } },

            { name : 'Big'				, element : 'big' },
            { name : 'Small'			, element : 'small' },
            { name : 'Typewriter'		, element : 'tt' },

            { name : 'Computer Code'	, element : 'code' },
            { name : 'Keyboard Phrase'	, element : 'kbd' },
            { name : 'Sample Text'		, element : 'samp' },
            { name : 'Variable'			, element : 'var' },

            { name : 'Deleted Text'		, element : 'del' },
            { name : 'Inserted Text'	, element : 'ins' },

            { name : 'Cited Work'		, element : 'cite' },
            { name : 'Inline Quotation'	, element : 'q' },

            { name : 'Language: RTL'	, element : 'span', attributes : { 'dir' : 'rtl' } },
            { name : 'Language: LTR'	, element : 'span', attributes : { 'dir' : 'ltr' } },
            */
            // Object Styles 
            {
                    name : 'Top gray bar',
                    type: 'widget', widget: 'image',
                    attributes :
                    {
                            'class' : 'inline-image',
                            'align' : '',
                            'style' : ''
                    }
            }
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