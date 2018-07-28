<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("register_form.php", ["title" => "Register"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // TODO
    if ($_POST["username"] == NULL)
        {
            apologize("You must enter a username");
        }
        
        else if ($_POST["password"] == NULL)
        {
            apologize("You must enter a password");
        }
        
        else if ($_POST["password"] != $_POST["confirmation"])
        {
            apologize("Your password and confirmation do not match");
        }
        
        if (CS50::query("INSERT INTO users (username, hash, cash) VALUES(?, ?, 10000.00)", $_POST["username"], crypt($_POST["password"])) === false)
        {
            apologize("Username already exists");
            
        }
        
        else
        {
            $rows = CS50::query("SELECT LAST_INSERT_ID() AS id");
            $id = $rows[0]["id"];
            $_SESSION["id"] = $id;
            redirect("index.php");
        }
        
        
    }
    else
    {
        // else render form
        render("register_form.php", ["title" => "Register"]);

    }

?>