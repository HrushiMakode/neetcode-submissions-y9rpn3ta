class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int x:nums){
            if(map[x]){
                return true;
            }
            map[x] = 1;
        }
        return false;
    }
};