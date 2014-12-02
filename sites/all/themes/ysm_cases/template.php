<?php
/*
 * @file
 */
$files = array(
  'elements.inc',
  'form.inc',
  'menu.inc',
  'theme.inc',
);

function _ysm_cases_load($files) {
  $tp = drupal_get_path('theme', 'ysm_cases');
  $file = '';
  $dir = dirname(__FILE__);

  // Check file path and '.inc' extension
  foreach($files as $file) {
    $file_path = $dir . '/inc/' . $file;
    if ( strpos($file,'.inc') > 0 && file_exists($file_path)) {
      require_once($file_path);
    }
  }
}

_ysm_cases_load($files);


/**
* Custom login page
*/
function ysm_cases_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'ysm_cases') . '/templates',
  'template' => 'user-login',
  'preprocess functions' => array(
  'ysm_cases_preprocess_user_login'
  ),
 );
return $items;
}
/**
 * Implements hook_html_head_alter().
 */
function ysm_cases_html_head_alter(&$head_elements) {
  // HTML5 charset declaration.
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8',
  );
  $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));
  // Add touch icons
  $head_elements['touch-icon'] = array(
  '#type' => 'html_tag',
  '#tag' => 'link', 
  '#attributes' => array(
  	'href' => '/' . $theme_path . '/_assets/images/apple-touch-icon-precomposed.png', 
  	'rel' => 'apple-touch-icon-precomposed',),
  );
  $head_elements['touch-icon-72'] = array(
  '#type' => 'html_tag',
  '#tag' => 'link', 
  '#attributes' => array(
  	'href' => '/' . $theme_path . '/_assets/images/apple-touch-icon-72x72-precomposed.png',
  	'sizes' => '72x72', 
	'rel' => 'apple-touch-icon-precomposed',),
  );
  $head_elements['touch-icon-114'] = array(
  '#type' => 'html_tag',
  '#tag' => 'link', 
  '#attributes' => array(
  	'href' => '/' . $theme_path . '/_assets/images/apple-touch-icon-114x114-precomposed.png',
  	'sizes' => '114x114', 
  	'rel' => 'apple-touch-icon-precomposed',),
  );
  $head_elements['touch-icon-144'] = array(
  '#type' => 'html_tag',
  '#tag' => 'link', 
  '#attributes' => array(
  	'href' => '/' . $theme_path . '/_assets/images/apple-touch-icon-144x144-precomposed.png',
  	'sizes' => '144x144', 
  	'rel' => 'apple-touch-icon-precomposed',),
  );
  // Optimize mobile viewport.
  $head_elements['mobile_viewport'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no',
    ),
  );

  // Force IE to use Chrome Frame if installed.
  $head_elements['chrome_frame'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'ie=edge, chrome=1',
      'http-equiv' => 'x-ua-compatible',
    ),
  );

  // Remove image toolbar in IE.
  $head_elements['ie_image_toolbar'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'ImageToolbar',
      'content' => 'false',
    ),
  );
  // Add iOS metatags
  $head_elements['touch-fullscreen'] = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'content' =>  'yes',
        'name' => 'apple-touch-fullscreen',
      ),
    ); 
  $head_elements['mobile-web-app'] = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'content' =>  'yes',
        'name' => 'apple-mobile-web-app-capable',
      ),
    );
}

/**
 * Implements theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function ysm_cases_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $breadcrumbs = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
	array_shift($breadcrumb); // Removes the Home item
    $breadcrumbs .= '<ul class="breadcrumbs">';

    /*foreach ($breadcrumb as $key => $value) {
      $breadcrumbs .= '<li><span>' . $value . '</span></li>';
    }

    $title = strip_tags(drupal_get_title());
    $breadcrumbs .= '<li class="current"><a href="#"><span>' . $title. '</span></a></li>';*/
    
    $array_size = count($breadcrumb);
    $i = 0;
    while ( $i < $array_size) {
      $breadcrumbs .= '<li class="breadcrumb-' . $i;
      if ($i == 0) {
        $breadcrumbs .= ' first';
      }
      if($i != 0 && $i+1 != $array_size ) {
        $breadcrumbs .= ' middle';
      }
      if ($i+1 == $array_size) {
        $breadcrumbs .= ' last';
      }
      preg_match("@<a ([^>]+)>(.+)</a>@i", $breadcrumb[$i], $matches);
	  $breadcrumbs .=  '"><a ' . $matches[1] . '><span>' . $matches[2] . '</span></a></li>';
      $i++;
    }
    $title = strip_tags(drupal_get_title());
    $breadcrumbs .= '<li class="current"><span>' . $title. '</span></li>';
    $breadcrumbs .= '</ul>';

    return $breadcrumbs;
  }
}

function ysm_cases_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div ' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field__field_type().
 */
function ysm_cases_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h2 class="field-label">' . $variables['label'] . ': </h2>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '">' . $output . '</div>';

  return $output;
}


/**
 * Implements hook_preprocess_block()
 */
function ysm_cases_preprocess_block(&$variables) {
  // Convenience variable for block headers.
  $title_class = &$variables['title_attributes_array']['class'];

  // Generic block header class.
  $title_class[] = 'block-title';

  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $title_class[] = 'element-invisible';
  }

  // Add a unique class for each block for styling.
  $variables['classes_array'][] = $variables['block_html_id'];

  // Add classes based on region.
  switch ($variables['elements']['#block']->region) {
    // Add a striping class
    case 'sidebar_first':
    case 'sidebar_second':
      $variables['classes_array'][] = 'block-' . $variables['zebra'];
    break;

    case 'header':
      $variables['classes_array'][] = 'header';
    break;

    default;
  }
}
/**
 * Implements template_preprocess_field().
 */
function ysm_cases_preprocess_field(&$variables) {
  $variables['title_attributes_array']['class'][] = 'field-label';

  // Edit classes for taxonomy term reference fields.
  if ($variables['field_type_css'] == 'taxonomy-term-reference') {
    $variables['content_attributes_array']['class'][] = 'comma-separated';
  }

  // Convinence variables
  $name = $variables['element']['#field_name'];
  $bundle = $variables['element']['#bundle'];
  $mode = $variables['element']['#view_mode'];
  $classes = &$variables['classes_array'];
  $title_classes = &$variables['title_attributes_array']['class'];
  $content_classes = &$variables['content_attributes_array']['class'];
  $item_classes = array();

  // Global field classes
  $classes[] = 'field-wrapper';
  $content_classes[] = 'field-items';
  $item_classes[] = 'field-item';

  // Uncomment the lines below to see variables you can use to target a field
  // print '<strong>Name:</strong> ' . $name . '<br/>';
  // print '<strong>Bundle:</strong> ' . $bundle  . '<br/>';
  // print '<strong>Mode:</strong> ' . $mode .'<br/>';

  // Add specific classes to targeted fields
  if(isset($field)) {
    switch ($mode) {
      // All teasers
      case 'teaser':
        switch ($field) {
          // Teaser read more links
          case 'node_link':
            $item_classes[] = 'more-link';
            break;
          // Teaser descriptions
          case 'body':
          case 'field_description':
            $item_classes[] = 'description';
            break;
        }
      break;
    }
  }
 // Check if exists
//  switch ($field) {
//    case 'field_authors':
//      $title_classes[] = 'inline';
//      $content_classes[] = 'authors';
//      $item_classes[] = 'author';
//      break;
//  }

  // Apply odd or even classes along with our custom classes to each item
  foreach ($variables['items'] as $delta => $item) {
    $item_classes[] = $delta % 2 ? 'odd' : 'even';
    $variables['item_attributes_array'][$delta]['class'] = $item_classes;
  }

  // Add class to a specific fields across content types.
  switch ($variables['element']['#field_name']) {
    case 'body':
      $variables['classes_array'] = array('body');
      break;

    case 'field_summary':
      $variables['classes_array'][] = 'text-teaser';
      break;

    case 'field_link':
    case 'field_date':
      // Replace classes entirely, instead of adding extra.
      $variables['classes_array'] = array('text-content');
      break;

    case 'field_image':
      // Replace classes entirely, instead of adding extra.
      $variables['classes_array'] = array('image');
      break;

    default:
      break;
  }
  // Add classes to body based on content type and view mode.
  if ($variables['element']['#field_name'] == 'body') {

    // Add classes to Foobar content type.
    if ($variables['element']['#bundle'] == 'foobar') {
      $variables['classes_array'][] = 'text-secondary';
    }

    // Add classes to other content types with view mode 'teaser';
    elseif ($variables['element']['#view_mode'] == 'teaser') {
      $variables['classes_array'][] = 'text-secondary';
    }

    // The rest is text-content.
    else {
      $variables['classes_array'][] = 'field';
    }
  }
}
/**
 * Implements template_preprocess_html().
 *
 * Adds additional classes
 */
function ysm_cases_preprocess_html(&$variables) {
  global $language;

  // Clean up the lang attributes
  $variables['html_attributes'] = 'lang="' . $language->language . '" dir="' . $language->dir . '"';

  // Add language body class.
  if (function_exists('locale')) {
    $variables['classes_array'][] = 'lang-' . $variables['language']->language;
  }

  //  @TODO Custom fonts from Google web-fonts
  //  $font = str_replace(' ', '+', theme_get_setting('ysm_cases_font'));
  //  if (theme_get_setting('ysm_cases_font')) {
  //    drupal_add_css('http://fonts.googleapis.com/css?family=' . $font , array('type' => 'external', 'group' => CSS_THEME));
  //  }

  // Classes for body element. Allows advanced theming based on context
  if (!$variables['is_front']) {
    // Add unique class for each page.
    $path = drupal_get_path_alias($_GET['q']);
    // Add unique class for each website section.
    list($section, ) = explode('/', $path, 2);
    $arg = explode('/', $_GET['q']);
    if ($arg[0] == 'node' && isset($arg[1])) {
      if ($arg[1] == 'add') {
        $section = 'node-add';
      }
      elseif (isset($arg[2]) && is_numeric($arg[1]) && ($arg[2] == 'edit' || $arg[2] == 'delete')) {
        $section = 'node-' . $arg[2];
      }
    }
    $variables['classes_array'][] = drupal_html_class('section-' . $section);
  }

  // Store the menu item since it has some useful information.
  $variables['menu_item'] = menu_get_item();
  if ($variables['menu_item']) {
    switch ($variables['menu_item']['page_callback']) {
      case 'views_page':
        $variables['classes_array'][] = 'views-page';
        break;
      case 'page_manager_page_execute':
      case 'page_manager_node_view':
      case 'page_manager_contact_site':
        $variables['classes_array'][] = 'panels-page';
        break;
    }
  }
  
  // Move JS files "$scripts" to page bottom for perfs/logic.
  // Add JS files that *needs* to be loaded in the head in a new "$head_scripts" scope.
  // For instance the Modernizr lib.
  drupal_add_js('/sites/all/libraries/modernizr/modernizr.min.js', array('scope' => 'head_scripts', 'weight' => -1, 'preprocess' => FALSE)); 
  
  /*
   * Zepto Fallback
   *   Use with caution
   */
  // drupal_add_js('document.write(\'<script src=/' . drupal_get_path('theme', 'ysm_cases') .'/js/vendor/\'
  //       + (\'__proto__\' in {} ? \'zepto\' : \'jquery\')
  //       + \'.js><\/script>\');',
  //       'inline', array('group',JS_LIBRARY));

  // !Empty variable for Typekit
  $variables['typekit'] = "wxc1xmi";

}
function ysm_cases_process_html(&$vars) {
  $vars['head_scripts'] = drupal_get_js('head_scripts');
}
/**
 * Implements template_preprocess_node
 *
 * Add template suggestions and classes
 */
function ysm_cases_preprocess_node(&$variables) {
  // Add node--node_type--view_mode.tpl.php suggestions
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  // Add node--view_mode.tpl.php suggestions
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];

  // Add a class for the view mode.
  if (!$variables['teaser']) {
    $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];
  }

  $variables['title_attributes_array']['class'][] = 'node-title';

//  // Add classes based on node type.
//  switch ($variables['type']) {
//    case 'news':
//    case 'pages':
//      $variables['attributes_array']['class'][] = 'content-wrapper';
//      $variables['attributes_array']['class'][] = 'text-content';
//      break;
//  }
//
//  // Add classes & theme hook suggestions based on view mode.
//  switch ($variables['view_mode']) {
//    case 'block_display':
//      $variables['theme_hook_suggestions'][] = 'node__aside';
//      $variables['title_attributes_array']['class'] = array('title-block');
//      $variables['attributes_array']['class'][] = 'block-content';
//      break;
//  }
}

/**
 * Implements template_preprocess_page
 *
 * Add convenience variables and template suggestions
 */
function ysm_cases_preprocess_page(&$variables) {
  // Add page--node_type.tpl.php suggestions
  if (!empty($variables['node'])) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
  }

  $variables['logo_img'] = '';
  if (!empty($variables['logo'])) {
    $variables['logo_img'] = theme('image', array(
      'path'  => $variables['logo'],
      'alt'   => strip_tags($variables['site_name']) . ' ' . t('logo'),
      'title' => strip_tags($variables['site_name']) . ' ' . t('Home'),
            'attributes' => array(
        'class' => array('logo'),
      ),
    ));
  }

  $variables['linked_logo']  = '';
  if (!empty($variables['logo_img'])) {
    $variables['linked_logo'] = l($variables['logo_img'], '<front>', array(
      'attributes' => array(
        'rel'   => 'home',
        'title' => strip_tags($variables['site_name']) . ' ' . t('Home'),
      ),
      'html' => TRUE,
    ));
  }

  $variables['linked_site_name'] = '';
  if (!empty($variables['site_name'])) {
    $variables['linked_site_name'] = l($variables['site_name'], '<front>', array(
      'attributes' => array(
        'rel'   => 'home',
        'title' => strip_tags($variables['site_name']) . ' ' . t('Home'),
      ),
    ));
  }

  // Site navigation links.
  $variables['main_menu_links'] = '';
  if (isset($variables['main_menu'])) {
    $variables['main_menu_links'] = theme('links__system_main_menu', array(
      'links' => $variables['main_menu'],
      'attributes' => array(
        'id' => 'main-menu',
        'class' => array('main-nav'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }

  $variables['secondary_menu_links'] = '';
  if (isset($variables['secondary_menu'])) {
    $variables['secondary_menu_links'] = theme('links__system_secondary_menu', array(
      'links' => $variables['secondary_menu'],
      'attributes' => array(
        'id'    => 'secondary-menu',
        'class' => array('secondary', 'link-list'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }

  // Convenience variables
  $left = $variables['page']['sidebar_first'];
  $right = $variables['page']['sidebar_second'];

  // Dynamic sidebars
  if (!empty($left) && !empty($right)) {
    $variables['main_grid'] = 'two-sidebars';
    $variables['sidebar_first_grid'] = 'two-sidebars';
    $variables['sidebar_sec_grid'] = 'two-sidebars';
  } elseif (empty($left) && !empty($right)) {
    $variables['main_grid'] = 'one-sidebar-right';
    $variables['sidebar_first_grid'] = '';
    $variables['sidebar_sec_grid'] = 'one-sidebar';
  } elseif (!empty($left) && empty($right)) {
    $variables['main_grid'] = 'one-sidebar-left';
    $variables['sidebar_first_grid'] = 'one-sidebar';
    $variables['sidebar_sec_grid'] = '';
  } else {
    $variables['main_grid'] = '';
    $variables['sidebar_first_grid'] = '';
    $variables['sidebar_sec_grid'] = '';
  }
}

/**
 * Implements template_preprocess_panels_pane().
 *
 */
function ysm_cases_preprocess_panels_pane(&$variables) {
}


/**
 * Implements template_preprocess_views_view().
 */
function ysm_cases_preprocess_views_view(&$variables) {

}

/**
 * Implements hook_css_alter()
 */
function ysm_cases_css_alter(&$css) {
  // Remove defaults.css file.
  //dsm(drupal_get_path('module', 'system') . '/system.menus.css');
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
}

/**
 * Implements hook_js_alter()
 */
function ysm_cases_js_alter(&$js) {
  if (!module_exists('jquery_update')) {
    // Swap out jQuery to use an updated version of the library.
    // $js['misc/jquery.js']['data'] = drupal_get_path('theme', 'ysm_cases') . '/js/vendor/jquery.js';
    $js['misc/jquery.js']['version'] = '1.8.2';
  }

  // @TODO moving scripts to footer possibly remove?
  // foreach ($js as $key => $js_script) {
  //   $js[$key]['scope'] = 'footer';
  // }
}

/**
 * Implements hook_preprocess_book_navigation()
 */
function ysm_cases_preprocess_book_navigation(&$variables) {
  template_preprocess_book_navigation($variables);
  
  $currentPageType = node_load($variables['book_link']['nid'])->type;

  if ($currentPageType != 'page') {
    // redirect to first child
    if($variables['current_depth']==2) {
      $first_child_link = book_next($variables['book_link']);
      if($first_child_link['link_path']) {
        drupal_goto($first_child_link['link_path'],array(),301);
      }
    }
    // Remove prev link for first child
    // and remove up link for first level children
    if($variables['current_depth']==3) {
      if($variables['parent_url'] == $variables['prev_url']) $variables['prev_url']='';
      $variables['parent_url']='';
    }
  }
}
