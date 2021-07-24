
var arr=[1,2,0];

function reduce1(arr,callback,params){ var boolean;if(params){console.log(arr.lenght);}else{console.log("no check");}callback(boolean,params)}if(arr.value%2==0){console.log("even");}function written(){console.log("hey");}
reduce1(arr,written,1);

---------------------------------------
Array.prototype.myReduce = function(callback, initialVal) { var output = (initialVal === undefined) ? undefined : initialVal; for (var i = 0; i < this.length; i++) { //user gives an initial value if (output !== undefined)
 output = callback.call(undefined, output, this[i], i, this); else//user doesnot gives -default initial value output = this[i]; } return output;};
var num = [20, 20, 2, 3];var total = num.myReduce(function(a, b) { return a + b;}, 10);console.log(total); 
var num2 = [ [0, "true"], [2, "true"], [5, "false"]].reduce(function(a, b) { console.log( a); 
 return a.concat(b);
});console.log(num2);
// var num3 = [// {0: "true"},// {2: "true"},// {5: "false"}// ].reduce(function(a, b) { // console.log( a);// } // );// console.log(JSON.stringify(num3));


--------------------------function 

() { this.getName = function(){ console.log("hi"); } this.setName = function(){ console.log("name setted"); }};var n = new Noor();n.getName().setName().getName().setName()
----------------------
