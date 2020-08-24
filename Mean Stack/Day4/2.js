let callAjaxUsingJquery = () => {
    let cityName = "pune";

    let url = "http://api.openweathermap.org/data/2.5/weather?&appid=fe09072a72ef5e41833b40e9d0871796&units=metric&q=" + cityName;

    $.ajax(url).done((data) => {
        console.log(data);
        myDOMOperationHere(data);

    });
};

let myDOMOperationHere = (data) => {
    const parent = document.querySelector("#parent");

    const newElement = parent.children[0].cloneNode(true);
    newElement.innerHTML = data.name + " " + data.main.temp_max;

    parent.insertBefore(newElement, parent.firstChild);
};