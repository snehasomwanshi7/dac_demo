

  function valid() {
    var uname = document.getElementById("username").value;
    var pwd = document.getElementById("password").value;
    var filter = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})/;
    if (uname == '') {
        alert("please enter user name.");
    } else if (pwd == '') {
        alert("enter the password");
    } else if (!filter.test(uname)) {
        alert("Enter valid Username.");
    } else if (uname.length < 3 || uname.length > 12) {
        alert("username");
    } else if (pwd.length < 5 || pwd.length > 12) {
        alert("Password ");
    } else {
        alert('Thank You for Login');

    }
}