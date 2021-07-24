​https://app.redsmin.com/server/5bbee9c33d8f9206d19b773f


var redis = require('redis');
//var client = redis.createClient();
 var client = redis.createClient(12170, {'host':'','password':''});


client.on('connect', function() {
    console.log('Redis client connected');
});

client.on('error', function (err) {
    console.log('Something went wrong ' + err);
});

client.set('my test key', '1', redis.print);
client.get('my test key', function (error​​, result) {
    if (error) {
        console.log(error);
        throw error;
    }
    console.log('GET result ->' + result);
});


