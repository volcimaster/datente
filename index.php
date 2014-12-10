<!doctype html public "-//w3c//dtd html 4.0 transitional//en">
<html>
<head>
<title>datente.com &nbsp; the best news aggregator on the web</title>
<link rel="stylesheet" type="text/css" href="/main.css" media="screen"/>
</head>
<body>

<?php // uses [magpierss.sourceforge.net] Magpie RSS
require_once('magpierss/rss_fetch.inc');
require_once('magpierss/magpiewrap.inc');

require_once('amzn.php');
?>

<div id="page">
  <br/>
  <p class="header"><a href="/">datente.com</a></p>
  <p class="subtitle">the best news aggregator on the web</p>
  <p/>

  <div id="directory">
{    <a href="/">Home</a> |
  <a href="//biz.datente.com">Business</a>&nbsp;
<a href="//edu.datente.com">Education</a>&nbsp;
    <a href="//money.datente.com">Money</a>&nbsp;
<a href="//opinion.datente.com">Opinion</a>&nbsp;
<a href="//party.datente.com">Politics</a>&nbsp;
<a href="//tech.datente.com">Tech</a>&nbsp;
    <a href="//travel.datente.com">Travel</a>&nbsp;
    <a href="//us.datente.com">US</a> }{
  <a href="//centos.datente.com/media">CentOS</a>&nbsp;
  <a href="//haiku.datente.com/media">Haiku-OS</a> }
   </div>

  <div id="cabinet" align="center">
<?php /* start news feed display */
// eventually this will draw from a database, but for now it's coming from an external file for each page
// the front page will have a smattering of different categories ... this may change later .. by reading-in all available .feeds files and picking just 12
  $feeds = file("main.feeds");
  shuffle($feeds);
  for($kt=0;$kt<16;$kt++){
      showrsstrim(trim($feeds[$kt],"\n"),96);
  }
?>
  </div>

  <div id="bottom">
    Feeds copyright &copy; the original owners/publishers. Datente.com copyright &copy; 2012 by <a href="//warrenmyers.com">Warren Myers</a>. All rights reserved. <a href="//christianity.datente.com">Christian Feeds</a>.
  </div>

</div>

</body>
</html
