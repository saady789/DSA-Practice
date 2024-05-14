#include <bits/stdc++.h>
//Recursion
int solve1(vector<int> &nums,int index) {
    //base case
    if (index >= nums.size()) {
        return 0;
    }
    if (index == nums.size() - 1) {
    return nums[index];
     }
    //processing + recursive calls 
    int inc = solve1( nums,index+2 ) + nums[index];
    int exc = solve1(nums,index+1);
    return max(inc,exc);

}
//DP1 Top Down
int solve2(vector<int> &nums,int index,vector<int> &dp) {
    //base case
    if (index >= nums.size()) {
        return 0;
    }
    if (index == nums.size() - 1) {
    return nums[index];
     }
    //processing + recursive calls 
    if(dp[index] != -1) return dp[index];
    int inc = solve2( nums,index+2,dp ) + nums[index];
    int exc = solve2(nums,index+1,dp);
    dp[index] = max(inc,exc);
    return dp[index];

}
//DP2 Bottom Up Tabulation
int solve3(vector<int> &nums) {
    vector<int> dp(nums.size()+1 , -1);
    int s = dp.size();
    dp[s - 1] = 0;
    dp[s - 2] = nums[s - 2];

    for (int i = s - 3; i >= 0; i--) { // Corrected loop initialization
        int inc = dp[i + 2] + nums[i];
        int exc = dp[i + 1];
        dp[i] = max(inc, exc);
    }

    return dp[0]; // Return the result for the entire array
}
//DP2 Constant Space Complexity
int solve4(vector<int> &nums) {

    int s = nums.size();
    int n1 = 0;
    int n2 = nums[s-1];
    for(int i=s-2;i>=0;i--){
        int n = nums[i];
        int inc = n+n1;
        int exc = n2;
        int m = max(inc,exc);
        n1=n2;
        n2=m;

    }

   return n2;
}


int maximumNonAdjacentSum(vector<int> &nums){
    int ans = solve4(nums);
    return ans;
}






