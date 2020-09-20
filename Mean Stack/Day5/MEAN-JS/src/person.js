/**
 * Data Member :: Here we dont explicitly defines members
 * Constructor :: Keyword constructor()
 * Member Function
 */

class Person {
    /**
     * Special Function::Constructor
     */
    constructor() {
        console.log('I am constructor');
    }

    /**
     * Normal Function:: Member Function
     */
    getPersonAddress() {
        return 'Mumbai';
    }
    /**
     * Normal Function::Member Function
     */

    getPersonName() {
        return " I_AM_DON!!";
    }

    getPersonDetail() {
        const name = this.getPersonName();
        const address = this.getPersonAddress();

        return name + " " + address;
    }
    /**
     * Normal Function:: Static Member Function
     */
    static main() {
        let p = new Person();
        const detail = p.getPersonDetail();
        console.log(detail);
    }
}
Person.main(); //OK:: Way to call static function
