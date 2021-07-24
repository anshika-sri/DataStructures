var interval = 1000 * 60 * 60 * 24; // 24 hours in milliseconds

var startOfDay = Math.floor(Date.now() / interval) * interval;
undefined
console.log(interval, startOfDay)
VM150:1 86400000 1565654400000
undefined
var endOfDay = startOfDay + interval - 1; // 23:59:59:9999
console.log(endOfDay)
VM226:2 1565740799999
