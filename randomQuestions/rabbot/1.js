const rabbot = require('rabbot');


rabbot.configure({ connection: { "user": "compro", "pass": "compro", "server": [""], "port": , "vhost": "" }, exchanges: [{ name: 'ex.1_isFanout', type: 'fanout', autoDelete: false }, { name: 'ex.2_isDirect', type: 'direct', autoDelete: false } ], queues: [{ name: 'anshika.q.1', autoDelete: false, subscribe: true }, { name: 'anshika.q.2', autoDelete: false, subscribe: true } ], bindings: [ //EQ { exchange: 'ex.1_isFanout', target: 'anshika.q.1', keys: [] }, { exchange: 'ex.1_isFanout', target: 'anshika.q.2', keys: [] }, { exchange: 'ex.2_isDirect', target: 'anshika.q.2', //binding as name of the queue keys: ['anshika'] }
 ] }).then( console.log("yes connected") ) .catch(function (err) { console.log("-----------config-ERR" + err + "-AT CONFIGerror here") });

rabbot.publish('ex.2_isDirect', { type: 'MyMessageDirect', //same as name of teh queue body: 'hello-message not consumed yet!', routingKey: "anshika",});

rabbot.publish('ex.1_isFanout', { type: 'MyMessageFanout', body: 'hello-message at fanout ecbhange type not consumed yet!'});
var handler = rabbot.handle("MyMessageFanout", function (message) { try { // do something meaningful? console.log("-------------FANOUThandles msgs----- " + message.body); message.ack(); } catch (err) { console.log("-------ERR RECEIVE" + err) message.nack(); }});
var handler = rabbot.handle("MyMessageDirect", function (message) { try { // do something meaningful? console.log("------------direct_handles msgs----- " + message.body); message.ack(); } catch (err) { console.log("-------ERR RECEIVE" + err) message.nack(); }});
//single reply-- REQUEUINGrabbot.request('ex.1_isFanout', { type: 'MyMessage' }) .then( function (reply) { console.log('got response:', reply.body); reply.ack(); } ).catch(function (err) //might be possible u get no reply { console.log("-----------REPLY ERR" + err + "-error here") });
