class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Apporch1 sort the array compare i with i-1 for 1 to n
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;


        // Approch2 use the hashmap or array as map
        unordered_set<int> seen;
        for (int n : nums) {
            if (seen.count(n)) return true;
            seen.insert(n);
        } 
        return false;
    }
};

