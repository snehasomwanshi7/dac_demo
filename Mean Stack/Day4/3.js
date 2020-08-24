let callAjaxUsingJquery = () => {
    let cityName = "pune";

    let url = "http://api.openweathermap.org/data/2.5/weather?&appid=fe09072a72ef5e41833b40e9d0871796&units=metric&q=" + cityName;

    $.ajax(url).done((data) => {

        // myDOMOperationHere(data);
        $('#parent :nth-child(1)').clone(true)
            .html(data.name + " " + data.main.temp_max + ' V5 ')
            .insertBefore($('#parent :nth-child(1)'));


    });
};

let myDOMOperationHere = (data) => {

    $('#parent :nth-child(1)').clone(true)
        .html(data.name + " " + data.main.temp_max + ' V4 ')
        .insertBefore($('#parent :nth-child(1)'));

};


let myDOMOperationHereV3 = (data) => {

    const newElement = $('#parent :nth-child(1)').clone(true).html(data.name + " " + data.main.temp_max);

    newElement.insertBefore($('#parent :nth-child(1)'));
};


let myDOMOperationHereV2 = (data) => {

    const newElement = $('#parent :nth-child(1)').clone(true);

    newElement.html(data.name + " " + data.main.temp_max);

    newElement.insertBefore($('#parent :nth-child(1)'));
};

let myDOMOperationHereV1 = (data) => {
    //const parent = document.querySelector("#parent");
    const parent = $("#parent");

    //parent.children[0]
    // $('#parent').children().first()
    //$('#parent :nth-child(1)')
    //$('#parent :first-child');

    //const newElement = parent.children[0].cloneNode(true);
    const newElement = $('#parent :nth-child(1)').clone(true);

    //newElement.innerHTML = data.name + " " + data.main.temp_max;
    newElement.html(data.name + " " + data.main.temp_max);

    //parent.insertBefore(newElement, parent.firstChild);
    newElement.insertBefore($('#parent :nth-child(1)'));
};