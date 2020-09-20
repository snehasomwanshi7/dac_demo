const express = require("express");

const app = express();

app.get("/", (req, res) => {
    res.send("Hello World");
});

app.get("/text", (req, res) => {
    res.send("Serveing the text response!!");
});

app.get("/json", (req, res) => {
    res.json({ id: 1, title: "Hello json" });
});

app.get("/nothing", (req, res) => {
    res.end();
});

app.get("/json", (req, res) => {
    res.json({ id: 1, title: "Hello json" });
});

app.get("/img", (req, res) => {
    res.json({ id: 1, title: "Hello json" });
res.send()
   // res.sendFile();
});


app.listen(3000);