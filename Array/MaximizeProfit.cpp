//  int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int mini = prices[0];
//         int diff=0;
//         for (int i = 1; i < prices.size(); i++) {
//             diff = prices[i] - mini;
//             profit = max(diff, profit);
//             mini = min(prices[i], mini);
//         }
//         return profit;
//     }
// };