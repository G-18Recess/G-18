<?php include ("admserver.php")?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login page</title>
    <link rel="stylesheet" href="user.css" type="text/css">
    <link rel="stylesheet" href="dash.css">
    <link rel="stylesheet" href="log.css">
    
</head>
<body>
<div class="navy">
        <nav>
            <div class="titty">
                Admin Login form
            </div>
        </nav>
        <header>
            <div>
                <h1>Character Assignmet System</h1>
                <p>Teaching for a better future!</p>
            </div>
        </header>
    </div>
        <div class="screen-1">
          <form action="admin.php" method="POST">
            
            <h1>Login</h1>
             <p>Please fill in this form to login.</p>

    
        
        
 <label id="user" >Username: </label>
 <input type="text" class="bol" name="Username" placeholder="Enter Username" required value="<?php echo $Username;?>">
<br><br>
 <label for="psw" id="pas">Password: </label>
 <input type="password" class="bol" name="Password" placeholder="Enter Password" required value="<?php echo $Password;?>">
<br>
<br>
 <button type="submit" name="login" value='login' >login</button>
 
 
</form>

</body>
</html>
