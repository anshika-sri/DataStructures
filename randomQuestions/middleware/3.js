​var express = require("express");
var app = express();
var bodyParser     =  require("body-parser");
app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json())



var router = express.Router();
console.log("********1****");


  app.use('/',function(req,res,next){
    res.json({"message" : "hellos"​​});  
   next();
  });

 



console.log("********3****");

   app.get("/test/id",function(req,res,next){
   console.log("%%%%%%%%");  
    if(true) {
        res.json({"message" : "get RENDERING "});    
      }
      else next();
    });


    app.post("/test/submit",function(req,res,next){
     var      modified=1;
     if(modified){
       res.json({"message" : "putOR updated"});  
      modified--;}
    else{
       res.json({"message" : " not  putOR updated"});
     }
     
      
    });
    
    
    console.log("********4****");

  
  app.listen(3000,function(){
  console.log("Live at Port 3000");
});
