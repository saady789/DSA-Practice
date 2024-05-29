class Solution {
public:
    int solve(vector<int> obstacles, int obs, int lane) {
        // Base case
        if (obs == obstacles.size() - 1)
            return 0;
        // Processing + recursive calls
        // check if forward jump is possible
        if (obstacles[obs + 1] != lane) {
            return solve(obstacles, obs + 1, lane);
        }
        // if not posslbe

        int mini = INT_MAX;
        for (int i = 1; i <= 3; i++) {
            if (lane != i && obstacles[obs] != i) {
                int ans = 1 + solve(obstacles, obs, i);
                mini = min(mini, ans);
            }
        }
        return mini;
    }

    int solve2(vector<int> obstacles, int obs, int lane,
               vector<vector<int>>& dp) {
        // Base case
        if (obs == obstacles.size() - 1)
            return 0;
        // Processing + recursive calls
        // check if forward jump is possible
        if (dp[lane][obs] != -1)
            return dp[lane][obs];
        if (obstacles[obs + 1] != lane) {
            return solve2(obstacles, obs + 1, lane, dp);
        }
        // if not posslbe

        int mini = INT_MAX;
        for (int i = 1; i <= 3; i++) {
            if (lane != i && obstacles[obs] != i) {
                int ans = 1 + solve2(obstacles, obs, i, dp);
                mini = min(mini, ans);
            }
        }
        dp[lane][obs] = mini;
        return dp[lane][obs];
    }
    int solve3(vector<int> obstacles) {
        vector<vector<int>> dp(4, vector<int>(obstacles.size(), 0));
        int n = obstacles.size() - 1;
        dp[0][n] = 0;
        dp[1][n] = 0;
        dp[2][n] = 0;
        dp[3][n] = 0;

        for (int currPos = n - 1; currPos >= 0; currPos--) {
            for (int currLane = 1; currLane <= 3; currLane++) {
                if (obstacles[currPos + 1] != currLane) {
                    dp[currLane][currPos] = dp[currLane][currPos + 1];
                }

                else {
                    int mini = 1e9;
                    for (int i = 1; i <= 3; i++) {
                        if (currLane != i && obstacles[currPos] != i) {
                            int ans = 1 + dp[i][currPos+1];
                            mini = min(mini, ans);
                        }
                    }
                    dp[currLane][currPos] = mini;
                }
            }
        }
        return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));
    }

    int solve4(vector<int> obstacles) {
        // vector<vector<int>> dp(4, vector<int>(obstacles.size(), 0));
        vector<int> curr(4,0);
        vector<int> next(4,0);
        int n = obstacles.size() - 1;


        for (int currPos = n - 1; currPos >= 0; currPos--) {
            for (int currLane = 1; currLane <= 3; currLane++) {
                if (obstacles[currPos + 1] != currLane) {
                    curr[currLane] = next[currLane];
                }

                else {
                    int mini = 1e9;
                    for (int i = 1; i <= 3; i++) {
                        if (currLane != i && obstacles[currPos] != i) {
                            int ans = 1 + next[i];
                            mini = min(mini, ans);
                        }
                    }
                    curr[currLane] = mini;

                }
            }
             next = curr;

        }
        return min(next[2], min(1 + next[1], 1 + next[3]));
    }
    int minSideJumps(vector<int>& obstacles) {
        // vector<vector<int>> dp(4, vector<int>(obstacles.size(), -1));
        return solve4(obstacles);
    }
};