/** * body: {karan: 'arora', 'anshika': 'sri'} * conditionalChecks: [{key: duedate, value: 12, operator: '<'}, * {key: title, value: 24, operator: '='}] */function _genUpdateExpression(body, conditionalChecks) {
  var body = { karan: 'arora', 'anshika': 'sri' }
  var conditionalChecks = [{ key: 'duedate', value: '12', operator: '<' }, { key: 'title', value: '24', operator: '=' }]
  var updateExp = [];
  var attributeKeys = {};
  var attributeVals = {};
  var ConditionExpression = '';
  var keyNo = 1;
  for (var key in body) { updateExp.push('#k' + keyNo + ' = :v' + keyNo); attributeVals[':v' + keyNo] = body[key]; attributeKeys['#k' + keyNo] = key; keyNo += 1; }
  if (conditionalChecks) { for (var key in conditionalChecks) { ConditionExpression = '#k' + keyNo + ' ' + conditionalChecks[0].operator + ' ' + ':v' + keyNo; } } /**
 * * return: * updateExp: 'set #k1 = :v1 , #k4 = :v4' * attributeVals:{ :v1 : arora , :v2 : 12, :v3 : sri, :v4 : sri } * attributeKeys: { #k1: karan , #k2: duedate , #k3: title, #k4: anshika} * ConditionExpression : '#k2 < :v2 AND #k3 = :v3' * */
  return { updateExp: 'set ' + updateExp.join(', '), attributeVals: attributeVals, attributeKeys: attributeKeys, ConditionExpression: ConditionExpression.join('AND') };
}
