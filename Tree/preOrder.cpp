//ProblemCode: https://practice.geeksforgeeks.org/problems/preorder-traversal/1/?track=PC-W6-T&batchId=140
//GeeksForGeeks
//Time Limit > 1.408sec


/**
 * Description: Helper function to calculate preOrder Traversal using
 * recursion and a VECTOR.
 */
vector<int> preCalc(Node* root, vector<int> v) {
    
if(root == nullptr) {
    return v;
}
else{
    v.push_back(root->data);
    v = preCalc(root->left, v);
    v = preCalc(root->right, v);
}
return v;
}

/**
 * Given Function says that it will return a VECTOR.
 */ 
vector<int> preorder(Node* root)
{
  // Your code here
  vector<int> v, res;
  res = preCalc(root, v);
  return res;
}
