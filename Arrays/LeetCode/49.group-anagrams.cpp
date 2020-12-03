//https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //input: [abc,acb,efg]
        //out: [[abc,acb], [efg]]
        //map: { 30: 2, 2431: 1 }
        
        vector<vector<string>> res;
        map<double,int> map;
        int count = 0;
         int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
        
        
        
        for(int i=0;i< strs.size();i++) {
            double key = 1;
            for(int j=0;j< strs[i].size();j++) { 
                key *= primes[strs[i][j] - 'a'];
            }
            
          
               
            if (map.find(key) == map.end()){
                map[key] = count++; 
                res.push_back(vector<string>(1, strs[i]));
            }
              else{
                res[map[key]].push_back(strs[i]);
            }
               
               
            }
               
        
        return res;
        
    }
};
