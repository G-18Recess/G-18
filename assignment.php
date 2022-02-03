<?php include ('assingserver.php') ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Assignmentp page</title>
    <link rel="stylesheet" href="user.css">
    <link rel="stylesheet" href="dash.css">
</head>
<body background="let.jpg">

<form action="assignment.php" method="POST">
<h1 style="text-align:center;">ASSINGMENT DERTERMINING PAGE</h1>
<h2 style="color: blueviolet;">Input the characters you want to put in the assignment:</h2><br>
<P><i> The assignment must not exceed 8 characters!</i></P>
<p><em><b>Characters must be entered in capital letters!</b></em></p>
<table>
   <tr>
       <td>
           <input type="text"name="charac1" value="<?php echo $charac1; ?>" class="cul">
       </td>
       <td>
           <input type="text"name="charac2" value="<?php echo $charac2; ?>"class="cul">
       </td>
   </tr>
   <tr>
       <td>
           <input type="text"name="charac3" value="<?php echo $charac3; ?>"class="cul">
       </td>
       <td>
           <input type="text"name="charac4" value="<?php echo $charac4; ?>"class="cul">
       </td>
   </tr>
   <tr>
       <td>
           <input type="text"name="charac5" value="<?php echo $charac5; ?>"class="cul">
       </td>
       <td>
           <input type="text"name="charac6" value="<?php echo $charac6; ?>"class="cul">
       </td>
   </tr>
   <tr>
       <td>
           <input type="text"name="charac7" value="<?php echo $charac7; ?>"class="cul">
       </td>
       <td>
           <input type="text"name="charac8" value="<?php echo $charac8; ?>"class="cul">
       </td>
   </tr>
</table>
    <br>
    <label> Start:<input type="time"></label>
    <label> End:<input type="time" ></label>
    <br><br>
    <button type="submit"name="upload">Upload</button>
    <button type="reset">Clear</button>
    <br><br>

<button> <a href="teachers.php">Go back</a></button>
</form>

</body>
</html>