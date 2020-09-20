const Promise = require("bluebird");
const mysql = require("mysql");
const connection = require("mysql/lib/Connection");

//Promisifying the mysql module methods
Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);


const DB_CONFIG = {
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'CDAC2020',
};

let helloDatabase = async () => {
    const connection = mysql.createConnection(DB_CONFIG);

    //connection open
    await connection.connectAsync();  //promise

    //let query
    let sql = "SELECT * FROM USER";
    let results = await connection.queryAsync(sql);


    //close the connection
    connection.end();


    console.log(results);
    return results;

};

let readByQuery = async () => {
    const connection = mysql.createConnection(DB_CONFIG);
    await connection.connectAsync();

    let sql = "SELECT * FROM USER WHERE USERID=21";
    let results = await connection.queryAsync(sql);

    await connection.endAsync();

    console.log(results);
    return results;
};

readByQuery();



