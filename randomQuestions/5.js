var key = 'b1.b2.b3.b4.b5';
var source = {b1: { b2: { b3: [ { b4: { b5: 'b5'} }, {}, {} ]}}, b5: 'b5'};
var keyArr = [], keyNow, key, f1obj = {} ;

function _getKey(source, key) {
  keyArr = key.split('.'); //[b1, b2, b3], b1.b2.b3
  if(source[key]) {
    console.log("**");
    return source[key];
  }
  else {
    if(Array.isArray(source)) { //source: [{}, { b4: { b5: 'b5'} }, {}, {} ], key: b4.b5
      for(var i = 0; i < source.length; i++) {
        console.log('*** key ', key , '*', source[i][key]);
        if(source[i][key]) { //{ b5: 'b5'}
          return source[i][key];
        }
        else {
          f1(); // { b5: 'b5'}, b5
          console.log("&&", source[key], "&&", keyNow);
          return _getKey(source[key], keyNow);
        }
      }
    }
    else if(typeof(source) === 'object') {
      f1();
      return _getKey(source[key], keyNow);
    }
  }

  function f1() {
    key = keyArr.shift(); //b1
    keyNow = keyArr.join('.'); //[b2.b3], b2.b3
    if(!source[key]) {
      console.log('empty source object or wrong key provided.');
      return;
    }
  }
}


var res =_getKey(source, key);
console.log(res);

/*
{b1: { b2: { b3: 'b'}}, b5: 'b5'}

t1: b4.b3
t2: b1.b2.b3
t3: b5
t4: {}
t5:
*/
