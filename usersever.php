<?php

session_start();

$Username ="";
$Password ="";

$error=array();
if(isset($_POST['login'])){

$Username = $_POST['Username'];
$Password = $_POST['Password'];



$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);

$query = "SELECT * FROM sign WHERE Username='$Username' and Password = '$Password'";
$result = mysqli_query($conn,$query);
$number = mysqli_num_rows($result);

if($number == 1){
    $row = mysqli_fetch_assoc($result);

    if($row['Username'] === $Username && $row['Password'] === $Password){
        echo"LOGGED IN SUCCESSFULLY";
        $_SESSION['Username']=$Username;
        $_SESSION['success']="Welcome";

        header('location: teachers.php');
        exit();
    }
    header('location: errror.php');
    exit();

}
else{
     header('location: errror.php');
  exit();
}
}
?>