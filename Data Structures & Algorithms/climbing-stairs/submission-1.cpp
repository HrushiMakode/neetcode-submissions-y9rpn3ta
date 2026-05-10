class Solution {
   public:

    int dp(int n,vector<int> &memo){
        if(memo[n]!=-1) return memo[n];
        return memo[n] = dp(n-1,memo) + dp(n-2,memo);
    }

    int climbStairs(int n) {
        vector<int> memo(n+1,-1);
        memo[1] = 1;
        memo[2] = 2;
        dp(n,memo);
        return memo[n];
    }
};
