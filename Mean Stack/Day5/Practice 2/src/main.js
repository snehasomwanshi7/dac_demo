//Importing the module
let Person = require('./person');
let Employee = require('./employee');

class Main {
    static main() {
        console.log("This is Execution Point");

        let p = new Person();
        let output = p.getName();

        let e = new Employee();
        let hello = e.hello();

        console.log(output);
        console.log(hello);
    }
}

Main.main();