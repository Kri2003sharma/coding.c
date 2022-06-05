<?php
echo"krishna<br>";
$id=array("hii"=>10,"hello"=>5,"hey"=>25);
arsort($id);

foreach($id as $x=>$x_value)
   {
   echo "Key=" . $x . ", Value=" . $x_value;
   echo "<br>";
   }
?>