const mod1 = require("./my.mod/my.module1");
const mod2 = require("./my.mod/my.module2");
const mod3 = require("./my.mod/my.module3");
const mod4 = require("./my.mod/my.module4");

//log from module 1
console.log(mod1);

const total = mod1.sum(10, 20);
console.log(total);

//log from module2
console.log(mod2);

//perform logic
const sumTotal = mod3.sum(1, 2);
console.log("SUM", sumTotal);

//log from module4
console.log(mod4);