<?php include('usersever.php') ?>
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
        <title>Teachers login</title>
        <link rel="stylesheet" href="user.css">
        <link rel="stylesheet" href="dash.css">
    </head>
    <body>
    <div class="navy">
        <nav>
            <div class="titty">
                Teacher Login form
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
          <form action="techlog.php" method="POST">
            
            <h1>Login</h1>
             <p><strong>Please fill in this form to login.</strong></p>

        <div class="name">
             <label for="name">Username</label>
             <input type="text" style="height: 30px;" placeholder="Enter name" name="Username" required value="<?php echo $Username; ?>"><br>
         </div>
            <div class="name">
             <label for="psw">Password</label>
             <input type="password" style="height: 30px;" placeholder="Enter Password" name="Password" required value="<?php echo $Password; ?>"><br><br>
           </div>
           <div class="login">
             <button type="submit" style="height: 30px" name="login">Login</button>
         &emsp;<button type="submit"> <a href="landing.php">Home</a></button>
             <label><br><br>
             <input type="checkbox" checked="checked" name="remember"> Remember me
             </label>
             
             </div>

          </form> 
          </div> 

        
        
    </body>
</html>


