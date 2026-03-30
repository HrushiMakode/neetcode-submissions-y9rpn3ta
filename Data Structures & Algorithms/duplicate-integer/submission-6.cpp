class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (!nums.size()){
            return false;
        }
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
        unordered_map<int,int> map;
        for(auto &x: nums){
            if(map[x]){
                return true;
            }
            map[x] = 1;
        }
        return false;
    }
};

