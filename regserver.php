<?php

session_start();

$Firstname ="";
$Lastname ="";
$Usercode = "";
$Telephone = "";

$error=array();
if(isset($_POST['register'])){

$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$Usercode = $_POST['Usercode'];
$Telephone = $_POST['Telephone'];

$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "INSERT INTO tree (Firstname, Lastname, Usercode, Telephone) VALUES ('$Firstname', '$Lastname', '$Usercode', '$Telephone')";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully registered';
header('location: reg.php');
}
?>