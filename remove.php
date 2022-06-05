<?php

rmdir("hi");
if(file_exists("hi"))
{
	echo "folder is remove";
}
else{
	echo "folder is not remove";
}

?>