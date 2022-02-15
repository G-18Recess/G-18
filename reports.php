

<?php include ("repserver.php") ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>REPORT</title>
    <link rel="stylesheet" href="user.css" type="text/css">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body background="lik.jpg">
    <div class="rep">
    <form action="reports.php" method="POST" class="com">
<h2>The child's name and the comment added.</h2>
<table class="table table-striped">
            <tr>
            
                <th>Firstname</th>&emsp;
                <th>Lastname</th>
                <th>Usercode</th>
                <th>AssignmentId</th>
                <th>Comment</th>

                
            
                
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
$sql = "SELECT Firstname,Lastname,tree.Usercode,assignid,Comment FROM tree,marks,comment WHERE tree.Usercode=marks.Usercode AND  tree.Usercode=comment.Usercode";

$result = $mysqli->query($sql);
$mysqli->close();
?>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Firstname'];?></td>
        <td><?php echo $rows['Lastname'];?></td>
        <td><?php echo $rows['Usercode'];?></td>
        <td><?php echo $rows['assignid'];?></td>
        <td><?php echo $rows['Comment'];?></td>
        
</tr>
<?php
}



    ?>


    </table><br><br>

<table class="table table-success table-striped" >
    <h2>This table shows the pupils' codes that attempted the assignment</h2>
    <th>Usercode</th>
    <th>Assignid</th>
    <th>Timelength</th>
    <th>Score</th>


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
$sql = "SELECT Usercode,assignid,timelength,Score FROM marks";
$result = $mysqli->query($sql);
$mysqli->close();
?>
<?php
while($rows=$result->fetch_assoc()){
    ?>
    <tr>
        
        <td><?php echo $rows['Usercode'];?></td>
        <td><?php echo $rows['assignid'];?></td>
        <td><?php echo $rows['timelength'];?></td>
        <td><?php echo $rows['Score'];?></td>
    
        
</tr>
<?php
}
    ?> 

</table>
<br><br>




    <table>
        <tr>
            <th>Usercode</th>
            <th>Comment</th>
        </tr>
        <tr>
            <td>
            <input type="text" name="Usercode" value="<?php echo $Usercode; ?>">
            </td>
            <td>
            <input type="text" name="Comment" value="<?php echo $Comment; ?>">
            </td>
        </tr>
        </table>
        <br><br>
        <button type="submit" name="Add" value="Add">Add</button>&emsp; 
        <button type="reset" >clear</button>
     
    <br><br><br>
    
    <button> <a href="teachers.php">Go back</a></button>
</form>
</div>
    </body>
</html>