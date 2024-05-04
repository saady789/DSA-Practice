class Solution {
public:
   //RECURSION
   int solve1(int i,vector<int> cost,vector<int>){
        //base case 
        if(i==cost.size()-1) return cost[i];
        if(i>cost.size()-1) return 0;
        //processing + recursive calls 
        int ans = min(solve1(i+1,cost),solve1(i+2,cost)) + cost[i];
        return ans;
    }
  //DP1 ( Top Down )
    int solve2(int i,vector<int> cost,vector<int> &dp){
        //base case 
        if(i==cost.size()-1) return cost[i];
        if(i>cost.size()-1) return 0;
        //processing + recursive calls 
        if(dp[i] != -1) return dp[i];
        dp[i] = min(solve2(i+1,cost,dp),solve2(i+2,cost,dp)) + cost[i];
        return dp[i];
    }
  //DP2 ( BOTTOM UP ) Tabulation
    int solve3(vector<int> cost){
        vector<int> dp(cost.size()+1,-1);   
        dp[cost.size()-1] = cost[cost.size()-1];
        dp[cost.size()]=0;
        int s = cost.size();
        for(int i=s-2;i>=0;i--){
            dp[i] = cost[i] + min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);

    }
  //DP3 Constant Space Complexity 
   int solve4(vector<int> cost){
    int s = cost.size();
    int ptr1 = cost[cost.size()-1];
    int ptr2 = 0; 
    for(int i=s-2;i>=0;i--){
        // cost[i] + min(dp[i+1],dp[i+2]);
        int curr = cost[i] + min(ptr1,ptr2);
        ptr2 = ptr1;
        ptr1 = curr;
    }
    return min(ptr1,ptr2);

}
    int minCostClimbingStairs(vector<int>& cost) {
        // vector<int> dp(cost.size()+1,-1);
        // int ans1 = solve(0,cost,dp);
        // int ans2 = solve(1,cost,dp);
        int ans3 = solve3(cost);
        return ans3;
    }
};