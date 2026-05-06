class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n,1);

        // prefix product from front
        int left = 1;
        for(int i=0;i<n;i++){
            ans[i] = left;
            left *= nums[i];
        }

        // for(int n:nums)cout<<n<<endl;

        // prefix product from behind
        int right = 1;

        for(int i = n-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i]; 
        }

        // for(int n:nums)cout<<n<<endl;


        return ans;
    }
};

// [1,2,4,6]
// [-1,0,1,2,3]
