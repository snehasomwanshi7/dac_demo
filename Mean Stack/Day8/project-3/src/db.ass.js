const Promise = require("bluebird");
const mysql = require("mysql");

Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);


const DB_CONFIG = {
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'CDAC2020',
};

let addUser = async () => {
    const connection = mysql.createConnection(DB_CONFIG);

    await connection.connectAsync();

    const sql="INSERT INTO USER(USERID,USERNAME,PAASWORD,EMAIL,MOBILE)VALUES(?,?,?,?,?)";

connection.queryAsync

    await connection.endAsync();
}