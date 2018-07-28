<?php
    
  // require configuration
  require("../includes/config.php");
  
  // query for cash
  
  $cash  = CS50::query("SELECT cash from users WHERE id=?",$_SESSION["id"]);
  
  // query for history table.
  $hist = CS50::query("SELECT * from history WHERE id=?",$_SESSION["id"]);
  
  // using render function to display the content via history_form.php
  
  render("history_form.php", ["title" => "History", "cash" => $cash, "hist" => $hist]);
    
?>

