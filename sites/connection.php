<?php

   $link = mysqli_connect("localhost" /* domain (example : igowtham.com) */ , "root" /* database username */ , "root" /*database password */, "hackaton" /* database name */);
   
       if (mysqli_connect_error())
   {
           die ("Database Connection Error");
       }
   ?>
