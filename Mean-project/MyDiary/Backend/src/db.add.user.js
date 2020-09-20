const Promise = require("bluebird");
const mysql = require("mysql");

Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);

const DB_CONFIG = {
    host: "localhost",
    port: "3307",
    user: "root",
    password: "root",
    database: "DAC2020",
};

let addUser = async(input) => {
    const connection = mysql.createConnection(DB_CONFIG);
    await connection.connectAsync();

    let sql =
        "INSERT INTO USER (USERNAME, PASSWORD, EMAIL, MOBILE) VALUES (?, ?, ?, ?)";
    await connection.queryAsync(sql, [
        input.username,
        input.password,
        input.email,
        input.mobile,
    ]);

    await connection.endAsync();
};

let authenticateUser = async(input) => {
    const connection = mysql.createConnection(DB_CONFIG);
    await connection.connectAsync();

    let sql = "SELECT * FROM USER WHERE USERNAME=? AND PASSWORD=?";
    const results = await connection.queryAsync(sql, [
        input.username,
        input.password,
    ]);

    await connection.endAsync();

    if (results.length === 0) {
        throw new Error("Invalid Credentials");
    }
};

module.exports = { addUser, authenticateUser };