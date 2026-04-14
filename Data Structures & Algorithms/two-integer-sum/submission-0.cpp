class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> prevMap;
        for(int i = 0; i < nums.size(); i++){
            auto it = prevMap.find(target - nums[i]);
            if (it != prevMap.end()){
                return {it->second, i};
            }
            prevMap.insert({nums[i], i});
        }
    }
};
