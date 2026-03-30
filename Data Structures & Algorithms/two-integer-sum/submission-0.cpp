class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;
        for(int i =0;i<nums.size();i++){
            auto it = map.find(target-nums[i]);
            if(it!=map.end()){
                int j = it->second -1;
                return {min(i,j),max(i,j)};
            }
            map[nums[i]] = i+1;
        }
        return {-1,-1};
    }
};
