<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>REQUEST</title>
    <link rel="stylesheet" href="user.css" type="text/css">
</head>
<body background="lik.jpg">

    <form action="request.php" method="POST" class="">
<h2 style="color: blue;">The Requests sent</h2>
<table id="" class="">
            <tr>
            
                <th>Usercode</th>&emsp;
                <th>Complaint</th>
                
            
                
</tr>
<?php
$user='root';
$password='';
$dbname='recess';
$servername='localhost';
$mysqli = new mysqli($servername, $user, $password, $dbname);
if($mysqli->connect_error){
    die('connect error(' .
    $mysqli->connect_errno.')'.
    $mysqli->connect_error);
}
$sql = "SELECT * FROM requests";
$result = $mysqli->query($sql);
$mysqli->close();
?>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Usercode'];?></td>
        <td><?php echo $rows['complaint'];?></td>
</tr>

<?php
}
?>
</table><br><br>
    <button> <a href="reg.php">Go to activate</a></button>
</form>
    </body>
</html>