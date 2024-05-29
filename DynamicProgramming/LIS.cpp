class Solution {
public:
    int solve(vector<int>& nums, int curr, int prev) {
        // base case
        if (curr == nums.size())
            return 0;
        // processing + recursive calls
        int taken = 0;
        if (prev == -1 || nums[curr] > nums[prev])
            taken = 1 + solve(nums, curr + 1, curr);
        int nottaken = 0 + solve(nums, curr + 1, prev);
        return max(taken, nottaken);
    }
    int solve2(vector<int>& nums, int curr, int prev, vector<vector<int>>& dp) {
        // base case
        if (curr == nums.size())
            return 0;
        if (dp[curr][prev + 1] != -1)
            return dp[curr][prev + 1];
        // processing + recursive calls
        int taken = 0;
        if (prev == -1 || nums[curr] > nums[prev])
            taken = 1 + solve2(nums, curr + 1, curr, dp);
        int nottaken = 0 + solve2(nums, curr + 1, prev, dp);
        dp[curr][prev + 1] = max(taken, nottaken);
        return dp[curr][prev + 1];
    }
    int solve3(vector<int>& nums) {
        vector<vector<int>> dp(nums.size() + 1,
                               vector<int>(nums.size() + 1, 0));
        for (int curr = nums.size() - 1; curr >= 0; curr--) {
            for (int prev = curr-1 ; prev>=-1; prev--) {
                int taken = 0;
                if (prev==-1 || nums[curr] > nums[prev])
                    taken = 1 + dp[curr+1][curr+1];
                int nottaken = 0 + dp[curr+1][prev+1];
                dp[curr][prev+1] = max(taken, nottaken);

            }
        }
        return dp[0][0] ;

    }
    int solve4(vector<int>& nums) {

        vector<int> currR(nums.size()+1,0);
        vector<int> nextR(nums.size()+1,0);
        for (int curr = nums.size() - 1; curr >= 0; curr--) {
            for (int prev = curr-1 ; prev>=-1; prev--) {
                int taken = 0;
                if (prev==-1 || nums[curr] > nums[prev])
                    taken = 1 + nextR[curr+1];
                int nottaken = 0 + nextR[prev+1];
                currR[prev+1] = max(taken, nottaken);

            }
            nextR = currR;
        }
        return nextR[0] ;

    }
    int solve5(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            }
            else {
                int index = lower_bound(ans.begin(),ans.end(),nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();


    }
    int lengthOfLIS(vector<int>& nums) {

        return solve5(nums);
    }
};