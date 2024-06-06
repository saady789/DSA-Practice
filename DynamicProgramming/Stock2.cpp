class Solution {
public:
    int solve1(vector<int> prices, int index, int buy) {
        if (index == prices.size())
            return 0;
        // Processing + Recursive Calls
        int case1 = 0;
        if (buy == 1)
            case1 = -1 * prices[index] + solve1(prices, index + 1, 0);
        if (buy == 0)
            case1 = prices[index] + solve1(prices, index + 1, 1);
        int case2 = 0 + solve1(prices, index + 1, buy);
        return max(case1, case2);
    }

    int solve2(vector<int> prices, int index, int buy,
               vector<vector<int>>& dp) {
        if (index == prices.size())
            return 0;
        // Processing + Recursive Calls
        if (dp[index][buy] != -1)
            return dp[index][buy];
        int case1 = 0;
        if (buy == 1)
            case1 = -1 * prices[index] + solve2(prices, index + 1, 0, dp);
        if (buy == 0)
            case1 = prices[index] + solve2(prices, index + 1, 1, dp);
        int case2 = 0 + solve1(prices, index + 1, buy);
        return dp[index][buy] = max(case1, case2);
    }

    int solve3(vector<int> prices) {
        vector<vector<int>> dp(prices.size() + 1, vector<int>(2, 0));
        int buy = 0;
        for (int currIndex = prices.size() - 1; currIndex >= 0; currIndex--) {
            for (int currBuy = 0; currBuy <= 1; currBuy++) {
                int case1 = 0;
                if (currBuy == 1)
                    case1 =
                        -1 * prices[currIndex] + dp[currIndex+1][0];
                if (currBuy == 0)
                    case1 = prices[currIndex] + dp[currIndex+1][1];
                int case2 = 0 + dp[currIndex+1][currBuy];
                dp[currIndex][currBuy] = max(case1,case2);
            }
        }

        return dp[0][1];
    }

    int solve4(vector<int> prices) {
        // vector<vector<int>> dp(prices.size() + 1, vector<int>(2, 0));
        vector<int> curr(2,0);
        vector<int> prev(2,0);
        int buy = 0;
        for (int currIndex = prices.size() - 1; currIndex >= 0; currIndex--) {
            for (int currBuy = 0; currBuy <= 1; currBuy++) {
                int case1 = 0;
                if (currBuy == 1)
                    case1 =
                        -1 * prices[currIndex] + prev[0];
                if (currBuy == 0)
                    case1 = prices[currIndex] + prev[1];
                int case2 = 0 + prev[currBuy];
                curr[currBuy] = max(case1,case2);
            }
            prev = curr;
        }

        return prev[1];
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size() + 1, vector<int>(2, -1));
        return solve4(prices);
    }
};