<form action="quote.php" method="post"> 
</form>
<?php
print "A share of " . $stock["name"] . "(" . $stock["symbol"] . ") costs :" . number_format($stock["price"] , 2);
?>
