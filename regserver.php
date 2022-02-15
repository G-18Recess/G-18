<?php

session_start();

$Firstname ="";
$Lastname ="";
$Usercode = "";
$Telephone = "";
$Status = "";
$error=array();
if(isset($_POST['register'])){

$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$Usercode = $_POST['Usercode'];
$Telephone = $_POST['Telephone'];
$Status = $_POST['Status'];

$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "INSERT INTO tree (Firstname, Lastname, Usercode, Telephone, Status) VALUES ('$Firstname', '$Lastname', '$Usercode', '$Telephone','$Status')";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully registered';
header('location: reg.php');
}

if(isset($_POST['act'])){

$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$Usercode = $_POST['Usercode'];
$Telephone = $_POST['Telephone'];
$Status = $_POST['Status'];

$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "UPDATE tree SET Status = 'Deactivated' where Usercode = $Usercode";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully registered';
header('location: reg.php');





}
?>