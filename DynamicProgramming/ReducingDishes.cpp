class Solution {
public:
    int solve(vector<int>& s, int index, int time) {
        if (index == s.size())
            return 0;
        int include = s[index] * time + solve(s, index + 1, time + 1);
        int exclude = 0 + solve(s, index + 1, time);
        return max(include, exclude);
    }
    int solve2(vector<int>& s, int index, int time, vector<vector<int>>& dp) {
        if (index == s.size())
            return 0;
        if (dp[index][time] != -1)
            return dp[index][time];
        int include = s[index] * time + solve2(s, index + 1, time + 1, dp);
        int exclude = 0 + solve2(s, index + 1, time, dp);
        dp[index][time] = max(include, exclude);
        return dp[index][time];
    }
    int solve3(vector<int>& s) {
        vector<vector<int>> dp(s.size() + 1,
                               vector<int>(s.size() + 1, 0));
        for (int currIndex = s.size()-1 ; currIndex >= 0; currIndex--) {
            for (int currTime = currIndex ; currTime >= 0; currTime--) {
                int include =
                    s[currIndex] * (currTime+1) + dp[currIndex + 1][currTime + 1];
                int exclude = 0 + dp[currIndex + 1][currTime];
                dp[currIndex][currTime] = max(include, exclude);
            }
        }

        return dp[0][0];
    }
    int solve4(vector<int>& s) {

        vector<int> curr(s.size()+1,0);
        vector<int> next(s.size()+1,0);
        for (int currIndex = s.size()-1 ; currIndex >= 0; currIndex--) {
            for (int currTime = currIndex ; currTime >= 0; currTime--) {
                int include =
                    s[currIndex] * (currTime+1) + next[currTime + 1];
                int exclude = 0 + next[currTime];
                curr[currTime] = max(include, exclude);

            }
              next = curr;
        }

        return next[0];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        return solve4(satisfaction);
    }
};