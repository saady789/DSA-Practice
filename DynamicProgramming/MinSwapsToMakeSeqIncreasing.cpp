class Solution {
public:
    int solve1(vector<int> nums1, vector<int> nums2, int index, bool swapped) {
        if (index == nums1.size())
            return 0;
        // processing + recursive calls
        int prev1 = nums1[index - 1];
        int prev2 = nums2[index - 1];
        if (swapped)
            swap(prev1, prev2);
        int ans = INT_MAX;
        if (nums1[index] > prev1 && nums2[index] > prev2) {
            ans = solve1(nums1, nums2, index + 1, 0);
        }
        if (nums1[index] > prev2 && nums2[index] > prev1) {
            ans = min(ans, 1 + solve1(nums1, nums2, index + 1, 1));
        }
        return ans;
    }

    int solve2(vector<int> nums1, vector<int> nums2, int index, bool swapped,
               vector<vector<int>>& dp) {
        if (index == nums1.size())
            return 0;
        // processing + recursive calls
        if (dp[index][swapped] != -1)
            return dp[index][swapped];
        int prev1 = nums1[index - 1];
        int prev2 = nums2[index - 1];
        if (swapped)
            swap(prev1, prev2);
        int ans = INT_MAX;
        if (nums1[index] > prev1 && nums2[index] > prev2) {
            ans = solve2(nums1, nums2, index + 1, 0, dp);
        }
        if (nums1[index] > prev2 && nums2[index] > prev1) {
            ans = min(ans, 1 + solve2(nums1, nums2, index + 1, 1, dp));
        }
        return dp[index][swapped] = ans;
    }

    int solve3(vector<int> nums1, vector<int> nums2) {
        vector<vector<int>> dp(nums1.size() + 1, vector<int>(2, 0));
        for (int currIndex = nums1.size()-1; currIndex >= 1; currIndex--) {
            for (int j = 1; j >= 0; j--) {
                int prev1 = nums1[currIndex - 1];
                int prev2 = nums2[currIndex - 1];
                if (j)
                    swap(prev1, prev2);
                int ans = INT_MAX;
                if (nums1[currIndex] > prev1 && nums2[currIndex] > prev2) {
                    ans = dp[currIndex+1][0];
                }
                if (nums1[currIndex] > prev2 && nums2[currIndex] > prev1) {
                    ans = min(ans, 1 + dp[currIndex+1][1]);
                }
                dp[currIndex][j] = ans;
            }
        }

        return dp[1][0] ;
    }

    int solve4(vector<int> nums1, vector<int> nums2) {
        // vector<vector<int>> dp(nums1.size() + 1, vector<int>(2, 0));
        vector<int> curr(2,0);
        vector<int> prev(2,0);
        for (int currIndex = nums1.size()-1; currIndex >= 1; currIndex--) {
            for (int j = 1; j >= 0; j--) {
                int prev1 = nums1[currIndex - 1];
                int prev2 = nums2[currIndex - 1];
                if (j)
                    swap(prev1, prev2);
                int ans = INT_MAX;
                if (nums1[currIndex] > prev1 && nums2[currIndex] > prev2) {
                    ans = prev[0];
                }
                if (nums1[currIndex] > prev2 && nums2[currIndex] > prev1) {
                    ans = min(ans, 1 + prev[1]);
                }
                curr[j] = ans;
            }
            prev = curr;
        }

        return prev[0] ;
    }
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), -1);
        nums2.insert(nums2.begin(), -1);
        return solve4(nums1, nums2);
    }
};