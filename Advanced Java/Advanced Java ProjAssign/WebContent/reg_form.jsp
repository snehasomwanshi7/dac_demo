<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Register Form</title>
</head>
<body>

   <form action ="reg.jsp" method="post">
   
    FullName : <input type = "text" name = "fullname"> <br> <br>
    
    UserName : <input type = "text" name = "username"> <br> <br>
    
    Password : <input type = "text" name = "password"> <br> <br>
    
      <input type ="submit" value = "Register"> &nbsp; &nbsp;
      
      <a href="login_page.jsp">Login</a>
   
   
   </form>

</body>
</html>