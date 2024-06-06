class Solution {
public:
    const int MOD = 1000000007;
    int solve1(int n, int k, int target) {
        // base case

        if (target < 0)
            return 0;
        if (n == 0 && target != 0)
            return 0;
        if (target == 0 && n != 0)
            return 0;
        if (target == 0 && n == 0)
            return 1;
        // processing + recursive calls
        int ans = 0;
        for (int i = 1; i <= k; i++) {
            ans += solve1(n - 1, k, target - i);
        }
        return ans;
    }
    int solve2(int n, int k, int target, vector<vector<int>>& dp) {
        // base case

        if (target < 0)
            return 0;
        if (n == 0 && target != 0)
            return 0;
        if (target == 0 && n != 0)
            return 0;
        if (target == 0 && n == 0)
            return 1;
        // processing + recursive calls
        if (dp[n][target] != -1)
            return dp[n][target];
        int ans = 0;
        for (int i = 1; i <= k; i++) {
            ans = (ans + solve2(n - 1, k, target - i, dp)) % MOD;
        }
        ans = ans % MOD;
        return dp[n][target] = ans;
    }
    int solve3(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        dp[0][0] = 1;
        for (int currDice = 1; currDice <= n; currDice++) {
            for (int currTarget = 1; currTarget <= target; currTarget++) {
                int ans = 0;
                for (int i = 1; i <= k; i++) {
                    if(currTarget-i >=0)
                    ans = (ans + dp[currDice-1][currTarget-i] % MOD) % MOD;
                }
                ans = ans % MOD;
                dp[currDice][currTarget] = ans;
            }
        }


        return dp[n][target];
    }

    int solve4(int n, int k, int target) {
        // vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        vector<int> curr(target+1,0);
        vector<int> prev(target+1,0);
        prev[0] = 1;
        for (int currDice = 1; currDice <= n; currDice++) {
            for (int currTarget = 1; currTarget <= target; currTarget++) {
                int ans = 0;
                for (int i = 1; i <= k; i++) {
                    if(currTarget-i >=0)
                    ans = (ans + prev[currTarget-i] % MOD) % MOD;
                }
                ans = ans % MOD;
                curr[currTarget] = ans;
            }
            prev = curr;
        }


        return prev[target];
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solve4(n, k, target);
    }
};