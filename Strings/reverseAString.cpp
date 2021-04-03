string reverseWord(string str){
    
  //Your code here
  
  int start =0, end = str.length() - 1;
  
  while(start<end) {
      int temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      
      start++;
      end--;
  }
  
  return str;
}
