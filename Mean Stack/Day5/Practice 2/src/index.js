//Internal Module by nodeJS
const http = require('http');

http.createServer((request, response) => {
    //response.end('Hello world');

    let json = {
        title: 'CDAC',
        id: 'MUMBAI'
    }
    response.end(JSON.stringify(json));

}).listen(5500);
