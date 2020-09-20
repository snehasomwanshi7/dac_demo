const Promise = require("bluebird");
const mysql = require("mysql");
const Connection = require("mysql/lib/Connection");

//Promisifying the mysql module methods
Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);


const DB_CONFIG = {
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'CDAC2020',
};

let readAllUsers = async () => {
    const connection = mysql.createConnection(DB_CONFIG);

    //getting the connection 
    await connection.connectAsync();

    let sql = "SELECT * FROM USER";
    const results = await connection.queryAsync(sql, []);

    //Releasing the connection
    await connection.endAsync();

    return results;
};

let readUserById = async (input) => {
    const connection = mysql.createConnection(DB_CONFIG);

    await connection.connectAsync();

    let sql = "SELECT * FROM USER WHERE USERID=?";
    const results = await connection.queryAsync(sql, [input.id]);

    await connection.endAsync();

    console.log(results);
    return results;
};


let readUserByQuery = async (input) => {
    const connection = mysql.createConnection(DB_CONFIG);
    await connection.connectAsync();

    let sql = "SELECT * FROM USER WHERE USERID=? AND EMAIL=?";
    const results = await connection.queryAsync(sql, [input.id, input.email]);
    console.log(results);

    await connection.endAsync();

    return results;
};

//readUserById({ id: 21 });
readUserByQuery({ id: 21, email: "shivshankarphunde29@gmail.com" });