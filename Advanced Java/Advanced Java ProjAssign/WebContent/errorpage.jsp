<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
     <%@ page isErrorPage="true" %>
     
     <%@ include file="login_page.jsp" %>
  
    
    
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Error Page</title>
</head>
<body>

  <h1> <%= exception.getMessage() %><h1>
  
 

</body>
</html>