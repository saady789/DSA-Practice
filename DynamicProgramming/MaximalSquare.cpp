class Solution {
public:
    int solve(vector<vector<char>>& matrix, int i, int j, int& maxi) {
        // base case
        if (i >= matrix.size() || j >= matrix[0].size())
            return 0;
        // processing + recursive calls
        int right = solve(matrix, i, j + 1, maxi);
        int diagnol = solve(matrix, i + 1, j + 1, maxi);
        int bottom = solve(matrix, i + 1, j, maxi);
        if (matrix[i][j] == '1') {
            int ans = 1 + min(bottom, min(right, diagnol));
            maxi = max(ans, maxi);
            return ans;
        } else
            return 0;
    }

    int solve2(vector<vector<char>>& matrix, int i, int j, int& maxi,
               vector<vector<int>>& dp) {
        // base case
        if (i >= matrix.size() || j >= matrix[0].size())
            return 0;
        // processing + recursive calls
        if (dp[i][j] != -1)
            return dp[i][j];
        int right = solve2(matrix, i, j + 1, maxi, dp);
        int diagnol = solve2(matrix, i + 1, j + 1, maxi, dp);
        int bottom = solve2(matrix, i + 1, j, maxi, dp);
        if (matrix[i][j] == '1') {
            int ans = 1 + min(bottom, min(right, diagnol));
            maxi = max(ans, maxi);
            dp[i][j] = ans;
            return dp[i][j];
        } else
            return 0;
    }
    int solve3(vector<vector<char>>& matrix, int& maxi) {
        vector<vector<int>> dp(matrix.size() + 1,
                               vector<int>(matrix[0].size()+1, 0));
        for (int i = matrix.size() - 1; i >= 0; i--) {
            for (int j = matrix[0].size() - 1; j >= 0; j--) {
                int right = dp[i][j + 1];
                int diagnol = dp[i + 1][j + 1];
                int bottom = dp[i + 1][j];
                if (matrix[i][j] == '1') {
                    int ans = 1 + min(bottom, min(right, diagnol));
                    maxi = max(ans, maxi);
                    dp[i][j] = ans;
                } 
            }
        }
        return 0;
    }
    int solve4(vector<vector<char>>& matrix, int& maxi) {

        vector<int> curr(matrix[0].size()+1,0);
        vector<int> next(matrix[0].size()+1,0);
        for (int i = matrix.size() - 1; i >= 0; i--) {
            for (int j = matrix[0].size() - 1; j >= 0; j--) {
                int right = curr[j + 1];
                int diagnol = next[j + 1];
                int bottom = next[j];
                if (matrix[i][j] == '1') {
                    curr[j] = 1 + min(bottom, min(right, diagnol));
                    maxi = max(curr[j], maxi);

                } 
            }
            next = curr;
             curr.assign(matrix[0].size() + 1, 0);  // Reset curr for next iteration
        }
        return 0;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi = 0;

         solve4(matrix,maxi);
        return maxi * maxi;
    }
};