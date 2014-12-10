<?php  
// wrapper function for magpierss
// written 29 Jul 2005 by Warren Myers
function showrss($url){
   $rss = @fetch_rss($url);
   if(!$rss)
	return;
   $kt = 0;

   echo '<div id="rss">'."\n";
   echo "<h4>" . $rss->channel['title'] . "</h4>\n";
   echo "<ul>\n";
   foreach ($rss->items as $item) {
      $href = $item['link'];
      $title = $item['title'];
      echo "<li><a href=\"$href\">$title</a></li>\n";
      $kt++;
      if($kt>=10){
	break;
      }
   }
   echo "</ul>\n";
   echo "</div>\n";
}

function showrsstrim($url,$len){
   $rss = @fetch_rss($url);
   if(!$rss)
	return;
   $kt = 0;

   echo '<div id="rss">'."\n";
   echo "<h4>" . $rss->channel['title'] . "</h4>\n";
   echo "<ul>\n";
   foreach ($rss->items as $item) {
      $href = $item['link'];
      $title = $item['title'];
      $title = substr($title,0,$len);
      echo "<li><a href=\"$href\">$title</a></li>\n";
      $kt++;
      if($kt>=10){
	break;
      }
   }
   echo "</ul>\n";
   echo "</div>\n";
}

function showrssfront($url){
   $rss = @fetch_rss($url);
   if(!$rss)
	return;

   echo "<ul>\n";
   foreach ($rss->items as $item) {
      $href = $item['link'];
      $title = $item['title'];
      $desc = $item['description'];
      echo "<li><a href=\"$href\">$title</a></li>\n";
      echo "<p>$desc\n";
   }
   echo "</ul>\n";
}

function showrssmain($url){
   $rss = @fetch_rss($url);
   if(!$rss)
	return;

   echo "<h4>" . $rss->channel['title'] . "</h4>\n";
   echo "<ul>\n";
   foreach ($rss->items as $item) {
      $href = $item['link'];
      $title = $item['title'];
      $desc = $item['description'];
      echo "<li><a href=\"$href\">$title</a></li>\n";
      echo "<p>$desc\n";
   }
   echo "</ul>\n";
}
?>
