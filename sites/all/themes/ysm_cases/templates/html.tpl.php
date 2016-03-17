<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?>
<!DOCTYPE html>
<!-- Sorry no IE7 support! -->

<!--[if IE 8]><html class="no-js lt-ie9" lang="en"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js" lang="en"> <!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $head_scripts; ?>
  <!--[if lt IE 9]>
		<script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
	<![endif]-->
  <link rel="stylesheet" href="https://s3.amazonaws.com/icomoon.io/34850/YSMCases/style.css?dun8zl">
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
   <!-- JavaScript at the bottom for fast page loading -->
  <?php print $scripts; ?>
  <?php if ($typekit): ?>
	  <script type="text/javascript" src="//use.typekit.net/<?php print $typekit; ?>.js"></script>
	  <script type="text/javascript">try{Typekit.load();}catch(e){}</script>
  <?php endif; ?>

  <?php
    $path = drupal_get_path('module', 'sheetnode');
    $sripts = array();
    $scripts[] = "/socialcalc/formatnumber2.js";
    $scripts[] = "/socialcalc/formula1.js";
    $scripts[] = "/socialcalc/socialcalcconstants.js";
    $scripts[] = "/socialcalc/socialcalc-3.js";
    $scripts[] = "/socialcalc/socialcalctableeditor.js";
    $scripts[] = "/socialcalc/socialcalcpopup.js";
    $scripts[] = "/socialcalc/socialcalcspreadsheetcontrol.js";
    $scripts[] = "/socialcalc/socialcalcviewer.js";
    $scripts[] = "/sheetnode.js";
    foreach($scripts as $script) {
      drupal_add_js($script);
    }
  ?>
</body>
</html>
