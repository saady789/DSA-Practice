class Solution {
public:
    //Recursion Solution
    int solve1(vector<int> coins,int sum,int c){
        //base case
        if(sum==0) return 0;
        if(sum<0) return INT_MAX;
        //processing + recursive calls 
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
           int ans = solve1(coins,sum-coins[i],c+1);
           if(ans!=INT_MAX){
            mini = min(mini,ans+1);
           }
        }
        return mini;
    }
    //DP 1 Top Down Approach
    int solve2(vector<int> coins,int sum,int c,vector<int> &dp){
        //base case
        if(sum==0) return 0;
        if(sum<0) return INT_MAX;
        //processing + recursive calls 
        if(dp[sum]!= -1) return dp[sum];
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
           int ans = solve2(coins,sum-coins[i],c+1,dp);
           if(ans!=INT_MAX){
            mini = min(mini,ans+1);
           }
        }
        dp[sum] = mini;
        return dp[sum];
    }
    //DP 2 Bottom Up Approach using tabulation
    int solve3(vector<int> coins,int amount){
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;
        for(int i=0;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j] >=0 && dp[i-coins[j]]!=INT_MAX ){
                    dp[i] = min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount]==INT_MAX) return -1;
        return dp[amount];
    }
//Not possible to do in constant space complexity 



    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        int ans = solve3(coins,amount);
        return ans;

    }
};