<?php 
$color 		= ($fields['field_color']->content == '') ? 'yale' : $fields['field_color']->content;
$headline 	= $fields['field_headline']->content;
$icon 		= $fields['field_icon']->content;
$document 	= $fields['field_document']->content;
$pageURL 	= $fields['field_page_url']->content;
$href		= ($document != '') ? $document : $pageURL;
$teaser 	= $fields['field_teaser']->content;
$image 		= $fields['field_image']->content;
$isInline 	= $fields['field_inline_show']->content;
$inlineHTML = $fields['field_inline_html']->content;
?>

<?php if ($isInline == '' or $isInline == 0): ?>
	<div class="tile">
		<div class="tile-wrap <?php print $color ?>">
			<a href="<?php print $href ?>" target="_blank">
			<span class="img">
				<img src="<?php print $image ?>" />
				<i class="<?php print $icon ?>"></i>
			</span>
			
			<span class="text">
				<span class="header zeta"><?php print $headline ?></span>
			</span>
			<span class="tooltip"><span class="tooltext"><?php print $teaser ?></span></span>
			</a>
		</div>
	</div>

<?php elseif ($isInline == 1): ?>
	
	<div class="tile inline">
		<div class="tile-wrap">
			<div class="header zeta"><?php print $headline ?></div>
		</div>
	
		<div class="inline-content">
			<?php print $inlineHTML ?>
		</div>
	</div>

<?php endif ?>
