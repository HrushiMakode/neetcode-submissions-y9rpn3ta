class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0;
        int product = 1;
        for(int n:nums){
            if(n==0){
                zeros++;
            }
            else{
                product*=n;
            }
        }
        if(zeros>1){
            vector <int> ans(nums.size(),0);
            return ans;
        }
        if(zeros ==1){
            vector<int> ans;
            for(int n:nums){
                if(n==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
            return ans;
        }
        vector <int> ans;
        for(int n:nums){
            ans.push_back(product/n);
        }
        return ans;
        
    }
};

// [1,2,4,6]
// [-1,0,1,2,3]
