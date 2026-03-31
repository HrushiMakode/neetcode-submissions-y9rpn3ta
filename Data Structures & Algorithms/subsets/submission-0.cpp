class Solution {
public:


    void backtrack(vector<vector<int>> &ans , vector<int>& nums,vector<int> res,int i){
        if(i==nums.size()){
            ans.push_back(res);
            return;
        }
        // take a element 
        res.push_back(nums[i]);
        backtrack(ans,nums,res,i+1);
        // do not take a element 
        res.pop_back();
        backtrack(ans,nums,res,i+1);
    } 

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        backtrack(ans,nums,res,0);
        return ans;
    }
};
