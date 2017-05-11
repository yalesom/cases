<div class="page-wrapper no-background" id="page-wrapper">
	<header id="page-header">
		<div class="section-wrap">
			<a id="top"></a> 

				<?php
					// create var to hold the default logo
					$defaultLogo = $logo;

					// create empty var to hold the display logo
					$displayLogo	= '';
					
					// if(isset($node->book)) { // book page
					// 	// $parent = book_node_prepare($node->book['p1']);
					// 	//$pid = $parent['nid'];

					// 	$bookParent = node_load($node->book['bid']);

					// 	print_r($bookParent->field_custom_logo);

					// 	// $test = entity_load($node, $node->book['p1']);

					// 	// print_r($test);
					// }

					// if the user is in the book content type
					if(isset($node->book)) {

						$bookParent = node_load($node->book['bid']);

						// if the custom logo field isn't empty
						if (!empty($bookParent->field_custom_logo)) {
							// set the display logo to the custom logo
							$displayLogo	= file_create_url($bookParent->field_custom_logo['und'][0]['uri']);
						
						// no custom logo provided
						} else {
							// set the display logo to the default logo
							$displayLogo	= $defaultLogo;
						}
					// not on a custom content type
					} else {
						// set the display logo to the default logo
						$displayLogo = $defaultLogo;
					}
				?>

				<div class="site-logo">
				<!--<a href="<?php print $front_page; ?>" rel="home" id="site-logo"> -->
				<?php $displayLogo = str_replace(".png", ".png", $displayLogo); ?>
				<img src="<?php print $displayLogo; ?>" alt="<?php print $site_name; ?> logo" />
				<!-- </a> -->
				</div>
			
			<!-- !Header and Nav -->
			<?php if (!empty($page['header'])): ?>
			      <div class="header-main">
			      <?php print render($page['header']);?>
			      </div>
			    <?php endif; ?>
			    <?php if ($page['navigation']): ?>
			    	<nav class="primary-nav"><?php print render($page['navigation']); ?></nav>
				<?php endif; ?>

			  <div class="header-sections">
			    <?php if (!empty($page['header_left'])): ?>
			      <div class="header-left">
			      <?php print render($page['header_left']);?>
			      </div>
			    <?php endif; ?>
			    <?php if (!empty($page['header_right'])): ?>
			      <div class="header-right">
			      <?php print render($page['header_right']);?>
			      </div>
			    <?php endif; ?>
			  </div>
		</div>
		</header> <!-- /#page-header -->
		   
	<div id="main-content">
	  <div class="section-wrap">
		  <?php if ($messages): print $messages; endif; ?>
		  <?php if (!empty($page['help'])): print render($page['help']); endif; ?>
		  
		  <?php if (!empty($page['highlighted'])): ?>
		      <div class="highlight panel callout">
		        <?php print render($page['highlighted']); ?>
		      </div>
		    <?php endif; ?>
		  
		  <!--#main -->
		  <article class="main-content <?php print $main_grid; ?>">
		    <?php if ($breadcrumb): ?>
			    <nav class="breadcrumb"><?php print $breadcrumb; ?></nav>
			 <?php endif; ?>
		
		    <?php if ($title && !$is_front): ?>
		      <?php print render($title_prefix); ?>
		      <h1 id="page-title" class="title"><?php print $title; ?></h1>
		      <?php print render($title_suffix); ?>
		    <?php endif; ?>
		
		      <?php if (!empty($tabs)): ?>
		        <?php print render($tabs); ?>
		        <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
		      <?php endif; ?>
		
		      <?php if ($action_links): ?>
		        <ul class="action-links">
		          <?php print render($action_links); ?>
		        </ul>
		      <?php endif; ?>
		
		    <?php print render($page['content']); ?>

<?php  if($bookParent->field_bottom_logo['und'][0]['uri'] && $bookParent->field_bottom_content['und'][0]['value']) { ?>
<div id = "bottom-branding-override" class="hide">
<?php print $bookParent->field_bottom_content['und'][0]['value']; ?>
<?php 
print theme('image', array(
'path' => file_create_url($bookParent->field_bottom_logo['und'][0]['uri']),
'style' => 'medium',
));
?>
</div>
<?php  }  ?>

<?php if($bookParent->field_below_copyright_link['und'][0]['url']) { ?>
<li id = "footer-link-replacment"><a href = "<?php print ($bookParent->field_below_copyright_link['und'][0]['url']); ?>" target = "_blank"><?php print ($bookParent->field_below_copyright_link['und'][0]['title']); ?></a></li>
<?php } ?>


<?php var_dump($bookParent->field_below_copyright_logo); ?>
<?php  if($bookParent->field_below_copyright_logo['und'][0]['uri'] && $bookParent->field_below_copyright_logo['und'][0]['uri']) { ?>
<p id = "bottom-logo-override">new logo here...
<?php // print $bookParent->field_below_copyright_logo['und'][0]['value']; ?>
<?php 
print theme('image', array(
'path' => file_create_url($bookParent->field_below_copyright_logo['und'][0]['uri']),
'style' => 'medium',
));
?>
</div>
<?php  }  ?>
		  </article><!--/#main -->
		
		
		  <?php if (!empty($page['sidebar_first'])): ?>
		  <!--#sidebar-first -->
		    <aside id="sidebar-first" class="<?php print $sidebar_first_grid; ?> sidebar ">
		      <?php print render($page['sidebar_first']); ?>    
		    </aside><!--/#sidebar-first-->
		  <?php endif; ?>
		
		  <?php if (!empty($page['sidebar_second'])): ?>
		  <!--#sidebar-second -->
		    <aside id="sidebar-second" class="<?php print $sidebar_sec_grid;?> sidebar">
		      <?php print render($page['sidebar_second']); ?>
		    </aside><!--/#sidebar-second -->
		  <?php endif; ?>
	  </div>
	</div> <!--/#main-content -->
		        
	<?php if (!empty($page['footer_first']) || !empty($page['footer_middle']) || !empty($page['footer_last'])): ?>
	<footer id="page-footer">
		<div class="section-wrap">
		    <?php if (!empty($page['footer_first'])): ?>
		      <div class="footer-first">
		        <?php print render($page['footer_first']); ?>
		      </div>
		    <?php endif; ?>
		    <?php if (!empty($page['footer_middle'])): ?>
		      <div class="footer-middle" >
		        <?php print render($page['footer_middle']); ?>
		      </div>
		    <?php endif; ?>
		    <?php if (!empty($page['footer_last'])): ?>
		      <div class="footer-last">
		        <?php print render($page['footer_last']); ?>
		      </div>
		    <?php endif; ?>
		    <?php if(!empty($page['bottom_menu'])) :?>
		        <?php print render($page['bottom_menu']); ?>
		      <?php endif; ?>
		</div>
	</footer>
	<?php endif; ?>
   
</div> <!-- /#page-wrapper -->

<!-- the template -->
<div id="hidden-template" style="display:none;">
	<div id="template" class="modal">
		<div class="tile-wrapper">
			<div class="tile-target"></div>
			<a href="#" class="modal-close icon-remove"></a>
		</div>
	</div>
</div>

