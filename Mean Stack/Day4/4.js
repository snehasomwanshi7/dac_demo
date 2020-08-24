let callAjaxUsingJquery = () => {
    let cityName = $('#textid').val() || "pune";

    let url = "http://api.openweathermap.org/data/2.5/weather?&appid=fe09072a72ef5e41833b40e9d0871796&units=metric&q=" + cityName;

    $.ajax(url).done((data) => {

        // myDOMOperationHere(data);
        $('#parent :nth-child(1)')
            .html(data.name + " " + data.main.temp_max)
            .insertBefore($('#parent :nth-child(1)'));

        //clean the box
        $('#textid').val("");
    });
};