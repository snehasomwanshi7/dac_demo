function alertBox() {
    alert("This is an alert");
}

function confirmBox() {
    var txt;
    if (confirm("Confirm the status")) {
        txt = "The status was confirmed";
    }
    else {
        txt = "status was denied";
    }
    document.write(txt);
}

function promptBox() {
    var txt = prompt("Enter the value", " ");
    if (txt != null && txt != " ") {
        document.write("Hello" + txt);
    }
    else {
        document.write("Invalid");
    }

}