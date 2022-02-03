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
$sql = "SELECT * FROM sign";
$result = $mysqli->query($sql);
$mysqli->close();
?>
<?php include('conect.php')?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Teachers registration</title>
    <link rel="stylesheet" href="user.css">
    <link rel="stylesheet" href="dash.css">
</head>
<body background="kab.jpg">
    <form action="sign.php" method="POST">
        <h1 style="color: blue;">Sign in Teachers</h1>
        <label>Firstname: &nbsp;</label>
        <input type="text" name="Firstname" required value="<?php echo $Firstname; ?>">
        <br><br>
        <label>Lastname:&nbsp; </label>
        <input type="text" name="Lastname" required value="<?php echo $Lastname; ?>">
        <br><br>
        <label>Telephone: </label>
        <input type="text" name="Telephone" required value="<?php echo $Telephone; ?>">
        <br><br>
        <label>Username: </label>
        <input type="text" name="Username" required value="<?php echo $Username; ?>">
        <br><br>
        <label>Gender:&emsp;</label>
        <input type="text" name="Gender" required value="<?php echo $Gender; ?>">
        <br><br>
        <label>Password: </label>
        <input type="text"name="Password" required value="<?php echo $Password; ?>">
        <br><br>
        <label>Email:&emsp; &ensp; </label>
        <input type="email" name="Email"  required value="<?php echo $Email; ?>">
        <br><br>

        <input type="submit" name="Sign_up" value="Sign up">&emsp; &emsp;
        <input type="reset" value="Delete"><br><br>
        <table border="1px" id="table" class="table">
            <tr>
            
                <th>Firstname</th>
                <th>Lastname</th>
                <th>Telephone</th>
                <th>Username</th>
                <th>Gender</th>
                <th>Password</th>
                <th>Email</th>
                
</tr>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Firstname'];?></td>
        <td><?php echo $rows['Lastname'];?></td>
        <td><?php echo $rows['Telephone'];?></td>
        <td><?php echo $rows['Username'];?></td>
        <td><?php echo $rows['Gender'];?></td>
        <td><?php echo $rows['Password'];?></td>
        <td><?php echo $rows['Email'];?></td>
</tr>
<?php
}
    ?>
    </table><br><br>
        <button type="submit" class="sol"> <a href="admin.php">Log Out</a></button>

    </form>
    
</body>
</html>