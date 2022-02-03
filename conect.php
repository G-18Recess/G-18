<?php

session_start();

$Firstname ="";
$Lastname ="";
$Telephone = "";
$Username = "";
$Gender="";
$Password = "";
$Email = "";

$error=array();
if(isset($_POST['Sign_up'])){

$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$Telephone = $_POST['Telephone'];
$Username = $_POST['Username'];
$Gender=$_POST['Gender'];
$Password = $_POST['Password'];
$Email = $_POST['Email'];

$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "INSERT INTO sign (Firstname, Lastname, Telephone, Username, Gender, Password, Email) VALUES ('$Firstname', '$Lastname', '$Telephone', '$Username', '$Gender', '$Password', '$Email')";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully signed up';
header('location: sign.php');
}
?>