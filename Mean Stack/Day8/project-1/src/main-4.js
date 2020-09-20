/**
 * Asynchronous Function::And it returns Promise
 */
let hello = async () => {
    console.log("I am Hello");

    return "HELLO";
};

//Rule of Promise
hello().then((data) => {
    console.log(data);
});

