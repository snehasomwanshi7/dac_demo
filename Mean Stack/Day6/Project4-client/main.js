let ajaxcall = function () {

    let xhr = new XMLHttpRequest();
    xhr.open("GET", "http://localhost:5600/");

    xhr.onload = () => {
        const response = xhr.responseText;
        console.log(response);
    };
    xhr.send();
};