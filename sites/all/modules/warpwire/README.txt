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

Warpwire has two dependencies.

Modules
 * Wysiwyg - Allows the use of client-side editors to edit content.
 	(https://www.drupal.org/project/wysiwyg)
 * CKEditor - WYSIWYG text editor.


INSTALLATION
------------

The Warpwire module can be installed via the standard Drupal installation process
(http://drupal.org/node/895232).  Alternatively, simply extract the Warpwire module into
/sites/all/modules/ - the resulting folder will be /sites/all/modules/warpwire.

After installing the Warpwire module, you will need to configure the module 
for use in the WYSIWYG editor by following the steps below:

1) Log into your Drupal site, click on 'Modules', navigate to the 'Warpwire' section, and
   click the checkbox next to 'Warpwire'.  Click 'Save configuration' to enable Warpwire.

2) Click 'Modules', navigate to the 'User Interface' section, and click 'Configure'
   next to the 'Wysiwyg' module.  Specify the CKEditor for whichever input formats
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
