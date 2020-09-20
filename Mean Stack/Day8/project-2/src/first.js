const Promise = require("bluebird");
const mysql = require("mysql");

//Promisifying the mysql module methods
Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);

let helloDatabase = async () => {
    const connection = mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'password',
        database: 'CDAC2020',
    });

    //connection open
    await connection.connectAsync();  //promise

    console.log("Connection Success");

    //close the connection
    connection.end();

};

helloDatabase();



