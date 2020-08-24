

let callAjax = function () {
    let xhr = new XMLHttpRequest();

    // response is ready
    xhr.onload = () => {
        console.log(xhr.responseText);

        const refJson = JSON.parse(xhr.responseText);
        const data = refJson.data;

        //using this data :: we have to DOM operation 
        domLogic(refJson);
    };
    xhr.open("GEt", "https://reqres.in/api/users?page=2");
    xhr.send();
};


//DOM HTML,CSS
let domLogic = function (refJson) {
    console.log(refJson.data);

    let parent = document.querySelector("#parent");

    for (let i = 0; i < refJson.data.length; i++) {

        const item = refJson.data[i];

        let newElement = parent.children[0].cloneNode(true);
        newElement.innerHTML = item.first_name + " " + item.last_name;
        parent.insertBefore(newElement, parent.firstChild);
    }
};


 