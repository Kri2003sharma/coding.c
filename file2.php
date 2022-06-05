<?php

mkdir("hi");
if(file_exists("hi"))
{
	echo "folder exists";
}
else{
	echo "file does not exist";
}

?>