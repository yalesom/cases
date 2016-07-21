CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation

INTRODUCTION
------------

The Warpwire module allows for the embedding of Warpwire content within Drupal,
either via a CKEditor WYWIWYG integration, or directly.

An example of an embeddable Warpwire asset is as follows:

[warpwire:https://example.warpwire.com/w/AAAAAA/]

REQUIREMENTS
------------

Modules
 * At least one of the following:
   
   - Wysiwyg - Allows the use of client-side editors to edit content.
               Requires either the CKEditor or TinyMCE Wysiwyg editor to be enabled
 	            (https://www.drupal.org/project/wysiwyg)

   - CKEditor - WYSIWYG text editor.


INSTALLATION
------------

The Warpwire module can be installed via the standard Drupal installation process
(http://drupal.org/node/895232).  Alternatively, simply extract the Warpwire module into
/sites/all/modules/ - the resulting folder will be /sites/all/modules/warpwire.

Warpwire can be installed to function utilizing either the Wysiwyg or CKEditor modules.  Instructions
for configuring Warpwire within each configuration follow below:


WYSIWYG (with CKEditor or TinyMCE)
----------------------------------

After installing the Warpwire module, you will need to configure the module 
for use in the WYSIWYG editor by following the steps below:

1) Log into your Drupal site, click on 'Modules', navigate to the 'Warpwire' section, and
   click the checkbox next to 'Warpwire'.  Click 'Save configuration. to enable Warpwire.

2) Click 'Modules', navigate to the 'User Interface' section, and click 'Configure'
   next to the 'Wysiwyg' module.  Specify the CKEditor or TinyMCE editor for whichever input formats
   you wish Warpwire to be available (by utilizing the associated dropdown).  Click
   'Edit' next to the applicable input format, and then click on the 'Buttons and Plugins'
   section.  Click the checkbox next to 'Warpwire' to enable the Warpwire WYSIWYG plugin.

3) Click on 'Configuration', go to the 'Content Authoring' section, and click 'Text Formats'.
   For each of the input formats you selected in Step (2), click 'configure', locate the 
   'Enabled filters' section, and ensure that the 'Warpwire Filter' has been checked.  Click
   'Save configuration' to save the text format filter.

4) Click on 'Configuration', go to the 'Content Authoring' section, and click 'Warpwire'.
   In the 'Warpwire URL' input field, input the URL of your Warpwire site - for example, 
   'https://example.warpwire.com/'.  Make sure you include the 'https://', as well as the trailing
   slash.

CKEditor Only
-------------

After installing the Warpwire module, you will need to configure the module 
for use in the CKEditor by following the steps below:

1) Within the installed CKEditor module (by default located at /sites/all/modules/ckeditor/ 
   after module installation), navigate to the 'plugins' folder, and create a new folder named
   'warpwire'.  The resulting folder would, in a default installation, be located
   at /sites/all/modules/ckeditor/plugins/warpwire/

2) From the Warpwire module (by default located at /sites/all/modules/warpwire/ after module
   installation):
      - Navigate to the editors/ckeditor folder - in the default installation, this would be
        located at /sites/all/modules/warpwire/editors/ckeditor
      - From within the 'ckeditor' folder, copy the html and images folders, and the plugin.js 
        file, to the folder created in Step(1) above.  The resulting files and folders would be
        as follows:
         * /sites/all/modules/ckeditor/plugins/warpwire/html/
         * /sites/all/modules/ckeditor/plugins/warpwire/images/
         * /sites/all/modules/ckeditor/plugins/warpwire/plugin.js

3) Log into your Drupal site, click on 'Modules', navigate to the 'Warpwire' section, and
   click the checkbox next to 'Warpwire'.  Click 'Save configuration. to enable Warpwire.

4) Click 'Modules', navigate to the 'User Interface' section, and click 'Configure'
   next to the 'CKEditor' module.  For each input format that you wish Warpwire to be available:
      - Click the 'edit' link
      - Click 'EDITOR APPEARANCE'
      - Move the Warpwire button from the 'Available buttons' area in the 'Toolbar' 
        section to the 'Current toolbar' area
      - In the 'Plugins' section, click the checkbox next to 'Plugin file: warpwire'
      - Click the 'Save' button

5) Click on 'Configuration', go to the 'Content Authoring' section, and click 'Text Formats'.
   For each of the input formats you selected in Step (4), click 'configure', locate the 
   'Enabled filters' section, and ensure that the 'Warpwire Filter' has been checked.  Click
   'Save configuration' to save the text format filter.

6) Click on 'Configuration', go to the 'Content Authoring' section, and click 'Warpwire'.
   In the 'Warpwire URL' input field, input the URL of your Warpwire site - for example, 
   'https://example.warpwire.com/'.  Make sure you include the 'https://', as well as the trailing
   slash.


