const http = require("http");
const mod = require("./my.module");

http.createServer((req, res) => {
    res.setHeader("Access-Control-origin", "*")
    const myresponse = JSON.stringify(mod.list);

    //to send the response to the client
    res.end(myresponse);
})
    .listen(5600);


