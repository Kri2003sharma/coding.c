
<?php

$myfile=fopen("copy.txt","r");
while(!feof($myfile))
{
	$line=fgets($myfile);
	echo $line;
	echo "<br>";
	
}

?>
