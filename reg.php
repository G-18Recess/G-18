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
$sql = "SELECT * FROM tree";
$result = $mysqli->query($sql);

$mysqli->close();

?>
<?php include ("regserver.php") ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>registration of pupils</title>
    <link rel="stylesheet" href="./user.css" type="text/css">
    <link rel="stylesheet" href="dash.css">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body background="tr.jpg">

    <form action="reg.php" method = "POST">
    <h1 style="color: blue;">PUPILS' INFORMATION</h1>

    
    <table border="0px">
        <tr>
            <td>
            <label>Firstname:</lable>
            <input type="text" name="Firstname" value="<?php echo $Firstname; ?>">
            </td>

            <td>
            <label>Lastname: </lable>
            <input type="text" name ="Lastname" value="<?php echo $Lastname; ?>" >
</td>
</tr>
<tr>
    <td>
    <label>Usercode:</lable>
            <input type="text" name="Usercode" value="<?php echo $Usercode; ?>" >
</td>
<td>
    <label>Telephone:</lable>
            <input type="text" name="Telephone" value="<?php echo $Telephone; ?>">
</td>
</tr>
</table><br><br>
<button type="submit" name="register" value="register">Register</button>
<button type="reset">Clear</button>
<br><br>
<table class="table">
            <tr>
            
                <th>Firstname</th>&emsp;
                <th>Lastname</th>
                <th>Usercode</th>
                <th>Telephone</th>
                <th>Status </th>
            <th> Toggle</th>
</tr>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Firstname'];?></td>&emsp;
        <td><?php echo $rows['Lastname'];?></td>
        <td><?php echo $rows['Usercode'];?></td>
        <td><?php echo $rows['Telephone'];?></td>
        <td>
        
        <?php
        if($rows['status']=="1") 
                            echo "Active";
                        else 
                            echo "Inactive";
                    ?>                          
                </td>

        <td><?php            if($rows['status']=="1")
                    echo 
"<a href=deact.php?Id=".$rows['Id']." class='btn red'>Deactivate</a>";
                    else 
                        echo 
"<a href=act.php?Id=".$rows['Id']." class='btn green'>Activate</a>";
                    ?>
        </td>
</tr>
<?php
}
    ?>
    </table><br><br>

    <button> <a href="teachers.php">Go back</a></button>
         </form>
         
</body>
</html>