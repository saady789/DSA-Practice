class Solution {
public:
    int solve4(vector<int> prices,int fees) {
        vector<int> curr(2, 0);
        vector<int> prev(2, 0);
        int buy = 0;
        for (int currIndex = prices.size() - 1; currIndex >= 0; currIndex--) {
            for (int currBuy = 0; currBuy <= 1; currBuy++) {
                int case1 = 0;
                if (currBuy == 1)
                    case1 = -1 * prices[currIndex] + prev[0];
                if (currBuy == 0)
                    case1 = prices[currIndex] + prev[1] - fees;
                int case2 = 0 + prev[currBuy];
                curr[currBuy] = max(case1, case2);
            }
            prev = curr;
        }

        return prev[1];
    }
    int maxProfit(vector<int>& prices, int fee) {
        return solve4(prices,fee);
    }
};