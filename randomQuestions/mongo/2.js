var mongodb = require('mongodb');

var db ;

module.exports =  {
    connect : function initDB(callback) {

        var MongoClient = mongodb.MongoClient;
        var url = '';
        MongoClient.connect(url, function(err, dbConnection) {
            if (err) {
                console.log('Unable to connect to the mongoDB server. Error:', err);
                callback(er​​r);
            } else {
                db = dbConnection.db('anshika');
                callback(null, db);
            }
        }); 
    },
    getDB: function(){
        return db;
    }
}
