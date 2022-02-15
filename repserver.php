<?php

session_start();

$Usercode ="";
$Comment ="";

$error=array();
if(isset($_POST['Add'])){

$Usercode = $_POST['Usercode'];
$Comment = $_POST['Comment'];

$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "INSERT INTO comment (Usercode, Comment) VALUES ('$Usercode','$Comment')/*,('$Usercode','$Comment'),('$Usercode','$Comment'),('$Usercode','$Comment'),('$Usercode','$Comment')*/";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully registered';
header('location: reports.php');
}
?>