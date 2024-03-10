// class Comparator {
// public:
//     bool operator()(tuple<int, int, int> lhs, tuple<int, int, int> rhs) const {
//         // Define your comparison logic here
//         return get<0>(lhs) >= get<0>(rhs); // Reverse the comparison for Min-Heap
//     }
// };
// class Solution {
// public:
//     vector<int> smallestRange(vector<vector<int>>& nums) {
//         priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
//                        Comparator>
//             pq; // pair<value,row,col>
//         int max = INT_MIN;
//         int maxNum = 0;
//         int minNum = 0;
//         int range = INT_MAX;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i][0] > max) {
//                 max = nums[i][0];
//             }
//             pq.push(make_tuple(nums[i][0], i, 0));
//         }
//         while (!pq.empty()) {
//             auto it = pq.top();
//             pq.pop();
//             int val = get<0>(it);
//             int row = get<1>(it);
//             int col = get<2>(it);

//             if (max - val < range) {
//                 range = max - val;
//                 maxNum = max;
//                 minNum = val;
//             }

//             if (nums[row].size() > col + 1) {
//                 pq.push(make_tuple(nums[row][col + 1], row, col + 1));
//                 if (nums[row][col + 1] > max)
//                     max = nums[row][col + 1];
//             } else break;
//         }
//         vector<int> ans;
//         ans.push_back(minNum);
//         ans.push_back(maxNum);
//         return ans;
//     }
// };