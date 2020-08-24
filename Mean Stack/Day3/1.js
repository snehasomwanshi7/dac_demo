


let getweather = () => {
    //City name is hard coded

    let cityName = document.querySelector("#textid").value || "pune";

    /*let url = "http://api.openweathermap.org/data/2.5/weather?&appid=fe09072a72ef5e41833b40e9d0871796&units=metric&q=pune ";*/


    let url = "http://api.openweathermap.org/data/2.5/weather?&appid=fe09072a72ef5e41833b40e9d0871796&units=metric&q=" + cityName;

    let xhr = new XMLHttpRequest();
    xhr.open('GET', url);

    xhr.onload = () => {
        const refjson = JSON.parse(xhr.responseText);
        console.log(refjson);
        domOperationHere(refjson);

    };
    xhr.send();
};

let domOperationHere = (refjson) => {
    console.log(refjson.main);
    const name = refjson.name;
    const maxTemp = refjson.main.temp_max;

    const parent = document.querySelector("#parent");

    const newElement = parent.children[0].cloneNode(true);
    newElement.style.display = "flex";
    newElement.innerHTML = name + ' ' + maxTemp;

    parent.insertBefore(newElement, parent.firstChild);
    document.querySelector("#textid").value = " ";
};