<?php
echo"krishna<br>";
$cookie_name="user";
$cookie_value="google";
setcookie("cookie","",time()-(86400),"/");
echo"cookie is set";
?>
<html>
<body>
<?php
if(isset($_cookie[$cookie_name]))
{
	echo"cookie is not set";
}
else
{
	echo"cookie is set";
	
}
?>
</body>
</html>