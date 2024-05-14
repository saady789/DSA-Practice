// class Solution {
// public:
//     int solve(vector<int>& nums,int target,vector<int> &dp){
//         //base case
//         if(target<0) return 0;
//         if( target==0 ) { return 1; }
//         //processing + recursive calls 
//         if(dp[target] != -1) return dp[target];
//         int n = 0;
//         for(int i=0;i<nums.size();i++){
//             n += solve(nums,target-nums[i],dp);
//         }
//         dp[target] = n;
//         return dp[target];

//     }
//     int combinationSum4(vector<int>& nums, int target) {
//         vector<int> dp(target+1,-1);
//         return solve(nums,target,dp);
//     }
// };