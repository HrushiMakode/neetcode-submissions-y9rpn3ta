class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Apporch1 sort the array compare i with i-1 for 1 to n
        // Approch2 use the hashmap or array as map
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;

    }
};