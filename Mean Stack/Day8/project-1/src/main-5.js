let fs = require("fs");
let Promise = require("bluebird");

//helping us to get new method;from callback method=>Promise based method
Promise.promisifyAll(fs);

const filePath = "C:\Users\HP\OneDrive\Desktop.txt"
fs.readFileAsync(filePath, { encodinng: 'utf-8' })
    .then(data => {
        console.log(data);
    })
    .catch((err) => {
        console.log(err);
    });