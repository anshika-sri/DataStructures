function _getKey(source, key, logger) {
  var i = 1;
  if (! key.split('.')[i]) {
    return source[key];
  } else { // B = {b1: { b2: { b3: 'b'}}, b5: 'b5'} || [b1, b2, b3] || B.b1.b2.b3
    return _getKey(source[key.split('.')[i]], key.split('.')[i++]);
  }
}
