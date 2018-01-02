<?php
$z[0]=Array("global","",313,339);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",383,413);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",450,477);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1262,1297);
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","\r\n    <div class=\"panel\"><img src=\"[field:litpic/]\"/></div>\r\n    ",1389,1515);
$z[4][4]['titlelen']="";
$z[4][4]['row']="8";
$z[4][4]['typeid']="19";
$z[5]=Array("arclist","\r\n                <li> <a href=\"javascript:;\"> <img src=\"[field:litpic/]\" width=\"200\" height=\"286\" alt=\"\"/>\r\n                  <div class=\"sly-text\"> <span class=\"sly-text1\">[field:title/]</span>\r\n                    <hr/>\r\n                  </div>\r\n                  </a> </li>\r\n                ",1989,2346);
$z[5][4]['titlelen']="";
$z[5][4]['row']="3";
$z[5][4]['typeid']="20";
$z[6]=Array("sql"," \r\n              [field:content function='cn_substr(html2text(@me),240)'/]\r\n              ",2718,2879);
$z[6][4]['sql']="Select content from dede_arctype where id=3";
$z[7]=Array("arclist","\r\n                <li> <a href=\"[field:arcurl/]\"> <span class=\"m_xwbt fl\">[field:title/]</span> <span class=\"m_nr fr\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span> </a> </li>\r\n                ",3956,4219);
$z[7][4]['titlelen']="36";
$z[7][4]['row']="4";
$z[7][4]['typeid']="6";
$z[8]=Array("global","",4478,4500);
$z[8][4]['name']="cfg_sll";
$z[9]=Array("global","",4702,4723);
$z[9][4]['name']="cfg_qq";
$z[10]=Array("include","",5111,5148);
$z[10][4]['filename']="footer.htm";

?>