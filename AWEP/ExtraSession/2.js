//<button id="btn1" onclick="likes();">LIKE</button>

let lCounter = 0;
function likes() {
    let likes = document.querySelector("#btn1");
    lCounter++;
    if (lCounter <= 0) {      //dislike upto 1 not below 1
    }
    else {
        document.querySelector("#btn1").innerHTML = "like number" + lCounter;
    }
}
function dislike() {
    lCounter--;
    if (lCounter <= 0) {

    }
    else {
        document.querySelector("#btn1").innerHTML = "like number (D)" + lCounter;
    }
}