const Promise = require("bluebird");
const mysql = require("mysql");

//Promisify the mysql
Promise.promisifyAll(require("mysql/lib/Connection").prototype);
Promise.promisifyAll(require("mysql/lib/Pool").prototype);


let readAllUser = async () => {
    try {
        console.log('I am about to read DB');

        //STEP::1::Connect with database
        const connection = mysql.createConnection({
            host: 'localhost',
            user: 'root',
            password: 'password',
            database: 'CDAC2020',
        });

        //connection.connect();  //Normal Method from mysql module
        await connection.connectAsync(); //because of bluebird::promisify method
        console.log("Connection.Successful");
    } catch (err) {
        console.log(err);
    }
};

readAllUser();