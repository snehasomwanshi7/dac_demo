const fs = require("fs");

let readDemo = () => {
    console.log('read.file.will.be.done.here.async');

    const filePath = "\Users\HP\OneDrive\Desktop\temp.txt";
    fs.readFile(filePath, { encoding: "utf-8" }, (err, data) => {
        console.log(data);
    });
};

let readDemo1 = () => {
    try {
        console.log('read.file.will.be.done.here.sync');

        const filePath = "\Users\HP\OneDrive\Desktop\temp.txt";
        const fileData = fs.readFileSync(filePath, { encoding: "utf-8" });

        console.log(fileData);
    } catch (err) {
        console.log(err);
    }

};

let writeDemo = () => {
    console.log('write.file.will.be.done.here');
};

module.exports = { readDemo, readDemo1, writeDemo };