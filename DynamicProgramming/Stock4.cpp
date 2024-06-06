class Solution {
public:
 int solve1(vector<int> prices, int index, int buy, int limit) {
        if (index == prices.size() || limit == 0)
            return 0;
        // Processing + Recursive Calls
        int case1 = 0;
        if (buy == 1)
            case1 = -1 * prices[index] + solve1(prices, index + 1, 0, limit);
        if (buy == 0)
            case1 = prices[index] + solve1(prices, index + 1, 1, limit - 1);
        int case2 = 0 + solve1(prices, index + 1, buy, limit);
        return max(case1, case2);
    }
     int solve2(vector<int> prices, int index, int buy, int limit,
               vector<vector<vector<int>>>& dp) {
        if (index == prices.size() || limit == 0)
            return 0;
        // Processing + Recursive Calls
        if (dp[index][buy][limit] != -1)
            return dp[index][buy][limit];
        int case1 = 0;
        if (buy == 1)
            case1 =
                -1 * prices[index] + solve2(prices, index + 1, 0, limit, dp);
        if (buy == 0)
            case1 = prices[index] + solve2(prices, index + 1, 1, limit - 1, dp);
        int case2 = 0 + solve2(prices, index + 1, buy, limit, dp);
        return dp[index][buy][limit] = max(case1, case2);
    }
    int solve4(vector<int> prices,int k) {
        int n = prices.size();
        vector<vector<int>>curr(2, vector<int>(k+1, 0));
        vector<vector<int>>prev(2, vector<int>(k+1, 0));


        for (int currIndex = prices.size() - 1; currIndex >= 0; currIndex--) {
            for (int currBuy = 0; currBuy <= 1; currBuy++) {
                for (int limit = 1; limit <= k; limit++) {
                    int case1 = 0;
                    if (currBuy == 1)
                        case1 = -1 * prices[currIndex] + prev[0][limit];
                    if (currBuy == 0)
                        case1 = prices[currIndex] + prev[1][limit - 1];
                    int case2 = 0 + prev[currBuy][limit];
                    curr[currBuy][limit] = max(case1,case2);
                }
                prev = curr;
            }
        }

        return prev[1][k];
    }
    int maxProfit(int k, vector<int>& prices) {
        return solve4(prices,k);
    }
};