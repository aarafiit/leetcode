class Solution {
public:
    int fib_dp(int n,vector<int> &dp){
        if(dp[n] != -1) return dp[n];
        if(n == 0 || n == 1) return n;
        return dp[n] = fib_dp(n-1,dp)+fib_dp(n-2,dp);
    }
    
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int ans =  fib_dp(n,dp);
        return ans;
    }
};