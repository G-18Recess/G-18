<?php

session_start();

$charac1="";
$charac2="";
$charac3="";
$charac4="";
$charac5="";
$charac6="";
$charac7="";
$charac8="";
$error=array();
if(isset($_POST['upload'])){

$charac1 = $_POST['charac1'];
$charac2 = $_POST['charac2'];
$charac3 = $_POST['charac3'];
$charac4 = $_POST['charac4'];
$charac5 = $_POST['charac5'];
$charac6 = $_POST['charac6'];
$charac7 = $_POST['charac7'];
$charac8 = $_POST['charac8'];
$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

if($conn){
    $query = "INSERT INTO work (charac1,charac2,charac3,charac4,charac5,charac6,charac7,charac8) VALUES ('$charac1','$charac2','$charac3','$charac4','$charac5','$charac6','$charac7','$charac8')";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'assignment uploaded succeessfully';
header('location: teachers.php');
}
?>