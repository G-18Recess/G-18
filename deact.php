<?php
  
    // Connect to database 
    $con=mysqli_connect("localhost","root","","recess");
  
    // Check if id is set or not, if true,
    // toggle else simply go back to the page
    if (isset($_GET['Id'])){
  
        // Store the value from get to 
        // a local variable "course_id"
        $rows_Id=$_GET['Id'];
  
        // SQL query that sets the status to
        // 0 to indicate deactivation.
        $sql="UPDATE `tree` SET 
            `status`=0 WHERE Id='$rows_Id'";
  
        // Execute the query
        mysqli_query($con,$sql);
    }
  
    // Go back to course-page.php
    header('location: reg.php');
?>