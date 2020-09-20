const express = require("express");
const app = express();


app.get("/", (req, res) => {
    res.send("Hello World");
});


app.get("/feed", (req, res) => {
    res.json({ title: "Feed Request" });

});

app.post("/feed", (req, res) => {
    res.json({ title: "I am post request" });
});

app.put("/feed", (req, res) => {
    res.json({ title: "I am put request" });
});

app.delete("/feed", (req, res) => {
    res.json({ title: "I am delete request" });
});

//creating a webserver ::3000
app.listen(3000);