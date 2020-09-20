class Calculator {
    add(n1, n2) {
        return n1 + n2;
    }
    subtract(n1, n2) {
        return n1 - n2;
    }

    //Execution point
    static main() {
        let obj = new Calculator(); //create object
        let output = obj.add(1, 2);
        console.log(output);
    }
}
Calculator.main();