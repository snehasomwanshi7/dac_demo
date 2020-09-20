/**
 * Asynchronous Function::And it returns Promise
 */
let hello = async () => {
    console.log("I am Hello");

    return "HELLO";
};

//Rule of Promise
let mpromise = hello();

//resolve::Handling success::Handling output
mpromise.then((data) => {
    console.log(data);
});

//ERROR::REJECT::HANDLING ERROR
mpromise.catch((err) => {
    console.log(err);
});