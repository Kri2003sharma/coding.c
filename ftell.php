<?php
$myfile=fopen("copy.txt","r");
echo fgets($myfile);
echo ftell($myfile);
echo fgets($myfile);
?>