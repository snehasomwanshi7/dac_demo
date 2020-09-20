//Async::Non Blocking
let helloworld = async () => {
    for (let i = 0; i < 10; i++) {
        console.log("I am annonymous function!!");
    }
    console.log("I am Done!!");
};

//Async::Non Blocking
let helloUniverse = async () => {
    for (let i = 0; i < 10; i++) {
        console.log("I am arrow function");
    }

};

helloworld();
helloUniverse();