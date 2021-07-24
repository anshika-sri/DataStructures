​const express = require('express');
const router = express.Router();
var initDb = require('../Connection');
//var route=require('../app');
const app = express();
var http = require('http');
var MongoClient = require('mongodb').MongoClient;
var dev_db_url = "";
const mongoDB = dev_db_url;
var db;


//var route=require('./index');
//var node_routes=require('./node_routes');
// Require the controllers WHICH WE DID NOT CREATE YET!!
const product_controller = require('../controllers/product.controller');
initDb.connect(function (err, dbConnection) {
    if (err) {
        console.log("*****erro" ​​+ err);
    }
    else {
        db = dbConnection;
    }
});



router.get("/my", function (req, res, next) {
    res.send('Hi Anshika');
})

router.get('/book', function (req, res, next) {
    res.send('Get a random book')
    console.log("FOR A NOTEPAD TYPE APPLICATION-GET ALL ENTRY DETAILS ")
    next();
})


router.post('/test', product_controller.product_create);


router.post('/create', function (req, res) {

    db.collection('product').insert(req.body, function (err, res) {
        if (err) {
            console.log("err at ....")
            res.send('Error');
        }
        else {
            res.send('Success');
            console.log("postman req" + JSON.stringify(req.body));
        }
    });
})

console.log("FOR A NOTEPAD TYPE APPLICATION-POST ALL ENTRY DETAILS ")


router.put(function (req, res) {
    console.log("FOR A NOTEPAD TYPE APPLICATION-PUT ALL ENTRY DETAILS ")
})


module.exports = router;
