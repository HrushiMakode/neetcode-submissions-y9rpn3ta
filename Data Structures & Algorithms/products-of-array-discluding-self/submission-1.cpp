class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0; int product = 1;
        for(int num:nums){
            if(num == 0) zeros++;
            else product*=num;
        }
        vector<int> ans(nums.size(),0);
        if(zeros>1) return ans;

        for(int i=0;i<nums.size();i++){
            if(zeros==1){
                ans[i] = nums[i] == 0 ? product : 0;
            }
            else{
                ans[i] = product / nums[i];
            }
        }
        return ans;
    }
};

// [1,2,4,6]
// [-1,0,1,2,3]
