var express = require("express");var app = express();// env = process.env,// port = env.myapp_port || 3000// var bodyParser = require("body-parser");// var route = require('./router/index3');// var errorHandler = require('./router/index3');// var logErrors = require('./router/index3'); // var router = express.Router();var http = require('http');
app.use(function(req, res, next) { console.log('noor'); next();});
app.use(function(req, res, next) { console.log('noor2'); next(new Error('ansari')); // next()});
app.use('/ans', function(req, res, next) { console.log('3333'); next();})
app.use('/ans', function(req, res) { console.log('-------------') res.end('sri');})
app.use(function(err, req, res, next) { console.log(req) console.log('3333333333333'); next();});

