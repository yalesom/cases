<?php

/**
 * @file
 * mediacoreinsert dashboard template, controls the output in the popup
 */

/**
 *       __  _____________   _______   __________  ____  ______
 *      /  |/  / ____/ __ \ /  _/   | / ____/ __ \/ __ \/ ____/
 *     / /|_/ / __/ / / / / / // /| |/ /   / / / / /_/ / __/   
 *    / /  / / /___/ /_/ /_/ // ___ / /___/ /_/ / _, _/ /___   
 *   /_/  /_/_____/_____//___/_/  |_\____/\____/_/ |_/_____/   
 *                        WYSIWYG Plugin
 *
 *
 */

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" 
					"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html dir="ltr" lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title></title> <!-- blank for aesthetics -->
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <?php //print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
	<script type="text/javascript">
		<!-- The following is funky, but without it, IE8 on XP acts a fool. -->
		<!-- TODO Figure out why IE8 hates Allan and fix it -->
		function clicker() {
			return true;
		}
	</script>
</head>
<body>
<div id="mcore-embed">
	<div class="mcore-header">
		<div class="mcore-pagination">
		<a <?php if($offset != 0): ?>
			href="<?php print $previous ?>"
			<?php endif; ?>	
			class="mcore-btn mcore-prev <?php if($offset == 0) print "mcore-disabled" ?>"
			title="Goto Previous Page"
			onclick="clicker()">
				&#8656;
		</a>
		<a <?php if(!$maxedout): ?>
			href="<?php print $next ?>"
			<?php endif; ?>
			class="mcore-btn mcore-next <?php if($maxedout) print "mcore-disabled" ?>"
			title="Goto Next Page"
			onclick="clicker()">
				&#8658;
		</a>
		</div>
		<div class="mcore-title">MediaCore</div>
	</div>
	<form class="mcore-search" action="<?php print $dashpath ?>0" method="get">
		<div>
		<?php if($search): ?>
		<a class="mcore-clear-search" href="<?php print $dashpath ?>0">x</a>
		<?php endif; ?>
		<input type="text" 
				name="search" 
				id="search" 
				class="mcore-search-field"
				placeholder="<?php print $search ?>"/>
		</div>
	</form>
	<div class="mcore-content">

	<?php if(!$videos): ?>
	<div class="mcore-message">
		<img src="<?php print $modulepath ?>/images/zero-state.png" alt="zero state">
		<h2>No media found</h2>
		<p>Either you have no media in your MediaCore library, or your search returned no results.</p>
	</div>
	<?php endif; ?>

	<?php foreach ($videos as $video): ?>

	<?php
	// Approximate sizes, relative to ratio:
	// s_4x3 = 120x90
	// ml = 304x171
	// 720p = 1280x720
	// m = 195x110
	// l = 560x315 (active)
	// s = 128x72
	// xs = 64x36
	if ($embedsize == "large") {
		$embedwidth = $video->thumbs->l->x;
		$embedheight = $video->thumbs->l->y;	
	}
	if ($embedsize == "small") {
		$embedwidth = $video->thumbs->ml->x;
		$embedheight = $video->thumbs->ml->y;	
	}
	?>

		<div class="mcore-media mcore-clearfix mcore-video">  
			<div class="mcore-thumbnail">

        <a href="#" 
          class="add"
          data-url="<?php echo $video->url; ?>" 
          data-width="<?php echo $embedwidth ?>" 
          data-height="<?php echo $embedheight ?>">

  				<img src="<?php echo $video->thumbs->s->url; ?>"
						alt="<?php echo $video->title; ?>" />
				  <span class="mcore-border"></span>
        </a>
				<div class="mcore-overlay">
					<span class="mcore-length">
						<?php echo sec2hms($video->duration, true); ?>
					</span>
					<span class="mcore-icon"></span> 								
				</div>

			</div>
			<div class="mcore-info">
				<h3>
				

        <a href="#" 
          class="add"
          data-url="<?php echo $video->url; ?>" 
          data-width="<?php echo $embedwidth ?>" 
          data-height="<?php echo $embedheight ?>">
				  <?php echo $video->title; ?>
        </a>
				</h3>
				<span class="mcore-date">
					<?php echo ago(strtotime($video->publish_on)) ?>
				</span>
			</div>	
			<div class="mcore-add">
				<span class="mcore-btn mcore-add-btn">		

        <a href="#" 
          class="add"
          data-url="<?php echo $video->url; ?>" 
          data-width="<?php echo $embedwidth ?>" 
          data-height="<?php echo $embedheight ?>">
						<span class="mcore-icon"></span> 
						Add
        </a>	



				</span>
			</div>
	   </div> <!-- /.mcore-media -->
	<?php endforeach ?>
	

	</div> <!-- /.mcore-content -->
	<div class="mcore-footer">
		Page <?php echo $currentpage ?> of <?php echo $howmanypages ?>
	</div>
</div> <!-- /#mcore-embed -->
</body>
</html>
<?php 
function sec2hms ($sec, $padHours = false) 
{

  // start with a blank string
  $hms = "";
  
  // do the hours first: there are 3600 seconds in an hour, so if we divide
  // the total number of seconds by 3600 and throw away the remainder, we're
  // left with the number of hours in those seconds
  $hours = intval(intval($sec) / 3600); 
  
  // add hours to $hms (with a leading 0 if asked for)
  $hms .= ($padHours) 
        ? str_pad($hours, 2, "0", STR_PAD_LEFT). ":"
        : $hours. ":";
  
  // dividing the total seconds by 60 will give us the number of minutes
  // in total, but we're interested in *minutes past the hour* and to get
  // this, we have to divide by 60 again and then use the remainder
  $minutes = intval(($sec / 60) % 60); 
  
  // add minutes to $hms (with a leading 0 if needed)
  $hms .= str_pad($minutes, 2, "0", STR_PAD_LEFT). ":";
  
  // seconds past the minute are found by dividing the total number of seconds
  // by 60 and using the remainder
  $seconds = intval($sec % 60); 
  
  // add seconds to $hms (with a leading 0 if needed)
  $hms .= str_pad($seconds, 2, "0", STR_PAD_LEFT);
  
  // done!
  return $hms;

}


function ago($time)
{
   $periods = array("second", "minute", "hour", "day", "week", "month", "year", "decade");
   $lengths = array("60","60","24","7","4.35","12","10");

   $now = REQUEST_TIME;

   $difference = $now - $time;
   $tense = "ago";

   for($j = 0; $difference >= $lengths[$j] && $j < count($lengths)-1; $j++) {
       $difference /= $lengths[$j];
   }

   $difference = round($difference);

   if($difference != 1) {
       $periods[$j].= "s";
   }

   return "$difference $periods[$j] ago ";
}
?>