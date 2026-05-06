class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map <int,int> mp;
        for(int num:nums)mp[num]++;

        for(int num:nums){
            int count = 0;
            int next_num = num;
            while(mp.find(next_num)!=mp.end()){
                count++;
                next_num++;
                ans = max(count,ans);
            }
        }
        return ans;
    }
};
