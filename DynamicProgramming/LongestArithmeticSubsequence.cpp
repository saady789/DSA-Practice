class Solution {
public:
    // int solve1(vector<int> nums, int index, int difference, int length) {
    //     // Base case
    //     if (index == nums.size() - 1)
    //         return length;
    //     // Processing + Recursive Calls
    //     int ans = length;
    //     for (int i = index + 1; i < nums.size(); i++) {
    //         if (nums[i] - nums[index] == difference) {
    //             ans = max(ans, solve1(nums, i, difference, length + 1));
    //         } else {
    //             ans = max(ans, solve1(nums, i, nums[i] - nums[index], 2));
    //         }
    //     }
    //     return ans;
    // }

    // int solve2(vector<int> nums, int index, int difference, int length,
    //            unordered_map<int, unordered_map<int, int>>& memo) {
    //     // Base case
    //     if (index == nums.size() - 1)
    //         return length;
    //     if (memo[index][difference] &&
    //         memo[index][difference] > length)
    //         return memo[index][difference];
    //     // Processing + Recursive Calls
    //     int ans = length;
    //     for (int i = index + 1; i < nums.size(); i++) {

    //         if (nums[i] - nums[index] == difference) {
    //             ans = max(ans, solve2(nums, i, difference, length + 1,
    //             memo));
    //         } else {

    //             ans = max(ans, solve2(nums, i, nums[i] - nums[index], 2,
    //             memo));

    //         }
    //     }
    //     memo[index][difference] = ans;
    //     return ans;
    // }
    int solve(vector<int> nums, int index, int diff) {
        if (index < 0)
            return 0;
        int ans = 0;
        for (int i = index - 1; i >= 0; i--) {
            if (nums[index] - nums[i] == diff) {
                ans = max(ans, 1 + solve(nums, i, diff));
            }
        }
        return ans;
    }

    int solveMem(vector<int> nums, int index, int diff, vector<unordered_map<int,int>>& memo) {
        if (index < 0)
            return 0;
        if(memo[index].count(diff)) return memo[index][diff];
        int ans = 0;
        for (int i = index - 1; i >= 0; i--) {
            if (nums[index] - nums[i] == diff) {
                ans = max(ans, 1 + solveMem(nums, i, diff,memo));
            }
        }
        return memo[index][diff] = ans;

    }

    int solveTab(vector<int> nums) {
        vector<unordered_map<int,int>> memo(nums.size()+1);
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                int diff = nums[i]-nums[j];
                int cnt = 1;
                if(memo[j].count(diff)) cnt = memo[j][diff];
                memo[i][diff] = 1 + cnt;
                ans = max(ans,memo[i][diff]);

            }
        }

        return ans;

    }
    int longestArithSeqLength(vector<int>& nums) {
        // vector<unordered_map<int,int>> memo(nums.size()+1);
        // int ans = 0;
        return solveTab(nums);
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         int diff = nums[j] - nums[i];
        //         ans = max(ans, 2 + solveMem(nums, i, diff,memo));
        //     }
        // }


    }
};