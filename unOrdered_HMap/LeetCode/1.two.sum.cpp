//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          
        unordered_map<int, int> map;
        for(int i=0; i < nums.size(); i++) {
            auto it = map.find(target - nums[i]);
            if( it != map.end() ) {
                return vector <int> { i, it->second };     
            }
            
            map[nums[i]] = i;
            
        }
        
        return {};
    
}
};
