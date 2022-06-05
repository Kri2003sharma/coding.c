<html>
<body>
<form action=<?php echo $_SERVER['PHP_SELF']?> method= POST>
name:<input type ="text" name="name"><br>
e-mail:<input type="text" name="email"><br>
<input type ="submit" name="submit">
</form>
</body>
</html>
<?PHP
echo"krishna<br>";
if(isset($_POST['submit']))
{
	echo$_POST['name'];			
	echo$_POST['email'];
	
}
?>