class Solution {
public:
    int solve(vector<int> values, int i, int j) {
        if (i + 1 == j)
            return 0;
        // processing + recursive calls
        int mini = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            int ans = values[i] * values[k] * values[j] + solve(values, i, k) +
                      solve(values, k, j);
            mini = min(ans, mini);
        }
        return mini;
    }
    int solve2(vector<int> values, int i, int j, vector<vector<int>>& dp) {
        if (i + 1 == j)
            return 0;
        // processing + recursive calls
        if (dp[i][j] != -1)
            return dp[i][j];
        int mini = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            int ans = values[i] * values[k] * values[j] +
                      solve2(values, i, k, dp) + solve2(values, k, j, dp);
            mini = min(ans, mini);
        }
        dp[i][j] = mini;
        return dp[i][j];
    }
    int solve3(vector<int> values, int i, int j, vector<vector<int>>& dp) {
        if (i + 1 == j)
            return 0;
        // processing + recursive calls
        if (dp[i][j] != -1)
            return dp[i][j];
        int mini = INT_MAX;
        for (int k = i + 1; k < j; k++) {
            int ans = values[i] * values[k] * values[j] +
                      solve2(values, i, k, dp) + solve2(values, k, j, dp);
            mini = min(ans, mini);
        }
        dp[i][j] = mini;
        return dp[i][j];
    }

    int solve4(vector<int> values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i + 2; j < n; j++) {
                int mini = INT_MAX;
                for (int k = i + 1; k < j; k++) {
                    int ans =
                        values[i] * values[k] * values[j] + dp[i][k] + dp[k][j];
                    mini = min(ans, mini);


                }
                dp[i][j] = mini;
            }
        }
        // processing + recursive calls

        return dp[0][n-1];
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve4(values);
    }
};