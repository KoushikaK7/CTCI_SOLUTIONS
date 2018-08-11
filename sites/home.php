<?php
   session_start();
   
   if (array_key_exists("id", $_COOKIE) && $_COOKIE ['id']) 
   {
       $_SESSION['id'] = $_COOKIE['id'];
   }
   
   if (array_key_exists("id", $_SESSION)) 
   {     
     include("connection.php");
   } 
   
   else 
   {
       header("Location: index.php");   
   }
   ?>
   
<title>Home</title>
<?php include("../link/navafter.html"); ?>
<?php include("head.php") ?>
<?php include("foot.php") ?>
<?php include("../link/foot.html"); ?>
