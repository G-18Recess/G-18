<?php 

include('assingserver.php')



?>
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
           <input type="checkbox"name="hob[]" value="A">A &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="B">B&emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="C">C &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="D">D &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="E">E &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="F">F &emsp;
       </td>
   </tr>
   <tr>
   <td>
           <input type="checkbox"name="hob[]" value="G">G &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="H">H &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="I">I &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="J">J &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="K">K &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="L">L &emsp;
       </td>
   </tr>
   <tr>
   <td>
           <input type="checkbox"name="hob[]" value="M">M &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="N">N &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="O">O &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="P">P &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="Q">Q &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="R">R&emsp;
       </td>
   </tr>
   <tr><td>
           <input type="checkbox"name="hob[]" value="S" >S &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="T">T &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="U">U &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="V">V &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="W">W &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="X">X &emsp;
       </td>
   </tr>
<tr>
<td>
           <input type="checkbox"name="hob[]" value="Y">Y &emsp;
       </td>
       <td>
           <input type="checkbox"name="hob[]" value="Z">Z &emsp;
       </td>
     
</tr>
</table>
    <br>
    <label> Start:<input type="time" name="start"value="<?php echo $start; ?>"></label>&emsp;&emsp;&emsp;
    <label> End:<input type="time" name="end" value="<?php echo $end; ?>" ></label><br><br>
    <label> Startdate:<input type="date" name="Startdate"value="<?php echo $Startdate; ?>"></label>&emsp;&emsp;

    <label> Enddate:<input type="date" name="Enddate" value="<?php echo $Enddate; ?>" ></label>

    <br><br>
    <button type="submit"name="upload" value="upload">Upload</button>
    <button type="reset">Clear</button>
    <br><br>

<button> <a href="teachers.php">Go back</a></button>
</form>

</body>
</html>