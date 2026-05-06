class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s(nums.begin(),nums.end());

        for(int num:nums){
            int count = 0;
            int next_num = num;
            while(s.count(next_num)){
                count++;
                next_num++;
            }
            ans = max(ans,count);
        }

        return ans;

    }
};
