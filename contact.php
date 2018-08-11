<html>
<head>
<meta charset="UTF-8">
<title>Easy Bank</title>
<?php include("link/head.html"); ?>
</head>
<body background="bg.jpg" style="background-size: cover;">
<?php include("link/nav.html"); ?>
<div class="container" style="margin-top: 70px;">
<div class="jumbotron">

<form class="email" action="https://igowtham.com/mail.php" method="post">
  <div class="form-group">
    <label for="exampleFormControlInput1">Name</label>
    <input type="" class="form-control" name="name" id="name" placeholder="">
  </div>
    <div class="form-group">
    <label for="exampleFormControlInput1">Email</label>
    <input type="" class="form-control" name="email" id="email" placeholder="">
  </div>
    <div class="form-group">
    <label for="exampleFormControlInput1">Subject</label>
    <input type="" class="form-control" name="subject" id="subject" placeholder="">
  </div>
  <div class="form-group">
    <label for="exampleFormControlTextarea1">Feedback</label>
    <textarea class="form-control" id="message" name="message" rows="3"></textarea>
  </div>
</form>
  <input class="send" type="submit" value="Send Message" />
</div>
</div>
<?php include("link/foot.html"); ?>
</body>
</html>
