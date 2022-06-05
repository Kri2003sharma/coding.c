<?php
echo readfile("copy.php","r");
$file=fopen("copy.php", "r");
echo fread("copy.php");
?>