
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
<table id="table" class="table">
            <tr>
            
                <th>Firstname</th>&emsp;
                <th>Lastname</th>
                <th>Usercode</th>
                <th>Telephone</th>
                <th>Status
                    <td>
                        <select name="" id="">
                            <option>activated</option>
                            <option>deactivated</option>
                        </select>
                </th>
</tr>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Firstname'];?></td>&emsp;
        <td><?php echo $rows['Lastname'];?></td>
        <td><?php echo $rows['Usercode'];?></td>
        <td><?php echo $rows['Telephone'];?></td>
</tr>
<?php
}
    ?>
    </table><br><br>

    <button> <a href="teachers.php">Go back</a></button>
         </form>
         
</body>
</html>