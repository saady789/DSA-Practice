class Solution {
public:
    int solve1(int index, int end, vector<int> s, int n) {
        if (n == 0 || index > end)
            return 0;
        int take = s[index] + solve1(index + 2, end, s, n - 1);
        int nottake = 0 + solve1(index + 1, end, s, n);
        return max(take, nottake);
    }
    int solve2(int index, int end, vector<int> s, int n,
               vector<vector<int>>& dp) {
        if (n == 0 || index > end)
            return 0;
        if (dp[index][n] != -1)
            return dp[index][n];
        int take = s[index] + solve2(index + 2, end, s, n - 1, dp);
        int nottake = 0 + solve2(index + 1, end, s, n, dp);
        dp[index][n] = max(take, nottake);
        return dp[index][n];
    }
    int solve3(int index, int end, vector<int> s, int n) {
        vector<vector<int>> dp(s.size() + 2, vector<int>(n + 1, 0));
        for (int currIndex = end; currIndex >= index; currIndex--) {
            for (int currN = 1; currN <= n; currN++) {
                int take = s[currIndex] + dp[currIndex + 2][currN - 1];

                int nottake = 0 + dp[currIndex + 1][currN];
                dp[currIndex][currN] = max(take, nottake);
            }
        }

        return dp[index][n];
    }
    int solve4(int index, int end, vector<int> s, int n) {
        // vector<vector<int>> dp(s.size() + 2, vector<int>(n + 1, 0));
        vector<int> prev(n+1,0);
        vector<int> curr(n+1,0);
        vector<int> next(n+1,0);
        for (int currIndex = end; currIndex >= index; currIndex--) {
            for (int currN = 1; currN <= n; currN++) {
                int take = s[currIndex] + next[currN - 1];

                int nottake = 0 + curr[currN];
                prev[currN] = max(take, nottake);
            }
            next = curr;
            curr = prev;
        }

        return curr[n];
    }


    int maxSizeSlices(vector<int>& s) {
        int n = s.size() / 3;

        int case1 = solve4(0, s.size() - 2, s, n);
        int case2 = solve4(1, s.size() - 1, s, n);
        return max(case1, case2);
    }
};