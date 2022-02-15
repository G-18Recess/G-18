<?php  
$checkbox = "";
$Startdate = "";
$Enddate = "";
$start = "";
$end = "";

//ss$assignment = "";
/* Database Connection */  
$servername='localhost';
$username='root';
$password='';
$dbname='recess';
$conn = mysqli_connect($servername,$username,$password,$dbname);


  
if (isset($_POST['upload'])) 
{ 
    //$assignment = $_POST['hob'];
    $checkbox = implode('', $_POST['hob']) ;
    //echo $checkbox ;
    $Startdate = $_POST['Startdate'];
   $Enddate = $_POST['Enddate'];
    $start = $_POST['start'];
   $end = $_POST['end'];
   
   
if($conn){
    $query = "INSERT INTO work (assignment,Startdate,Enddate, start,end) VALUES ('$checkbox','$Startdate','$Enddate','$start','$end')";
    mysqli_query ($conn, $query);
}
$_SESSION['name']=$name;
$_SESSION['success']= 'Successfully uploaded';
header('location: assignment.php');
  
}    
?>  