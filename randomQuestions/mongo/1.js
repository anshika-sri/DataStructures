const express = require('express');
//var route = express.Router();const router = express.Router();
const product = require('./routes/product.route'); // Imports routes for the productsconst app = express();


const Mongoclient = require('mongodb').MongoClient;
app.use('/books', product);


console.log("check1")
 let port = 1234;var initApp=(function(err) { if(!err) { app.listen(port, function() { console.log('Server is up and running on port numner ' + port); }); }})();

module.exports = router;





















//anshika// // var createError = require('http-errors');// var express = require('express');// // var path = require('path');// // var cookieParser = require('cookie-parser');// // var logger = require('morgan');// var bodyParser = require('body-parser');
// // var indexRouter = require('./routes/index');// // var usersRouter = require('./routes/users');// var product= require('./routes/product.route');// var mongoose=require('mongoose');
// var app = express();// app.use('/products', product);// // mongoose.connect('localhost:27017/dbsheet');// // // view engine setup// // app.set('views', path.join(__dirname, 'views'));// // app.set('view engine', 'jade');
// // app.use(logger('dev'));// // app.use(express.json());// // app.use(express.urlencoded({ extended: false }));// // app.use(cookieParser());// // app.use(express.static(path.join(__dirname, 'public')));
// // app.use('/', indexRouter);// // app.use('/users', usersRouter);
// // // catch 404 and forward to error handler// // app.use(function(req, res, next) {// // next(createError(404));// // });
// // // error handler// // app.use(function(err, req, res, next) {// // // set locals, only providing error in development// // res.locals.message = err.message;// // res.locals.error = req.app.get('env') === 'development' ? err : {};
// // // render the error page// // res.status(err.status || 500);// // res.render('error');// // });

// app.listen(1234,function(){// console.log("Live at Port 1234");// });
