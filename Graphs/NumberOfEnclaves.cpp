// class Solution {
// public:
//     int numEnclaves(vector<vector<int>>& grid) {
//         int in = 0;
//         int out = 0;
//         vector<vector<int>> visited(grid.size(),
//                                     vector<int>(grid[0].size(), 0));
//         queue<pair<int, int>> q;
//         int rows = grid.size() - 1;
//         int cols = grid[0].size() - 1;
//         for (int i = 0; i < grid.size(); i++) {
//             for (int j = 0; j < grid[i].size(); j++) {
//                 if (grid[i][j] == 1) {
//                     in++;
//                     if (i == 0 || i == rows || j == 0 || j == cols) {
//                         q.push(make_pair(i, j));
//                         visited[i][j] = 1;
//                     }
//                 }
//             }
//         }
//         while (!q.empty()) {
//             auto it = q.front();
//             q.pop();
//             in--;
//             int r = it.first;
//             int c = it.second;

//             if (r + 1 <= rows && !visited[r + 1][c] && grid[r + 1][c] == 1) {
//                 q.push(make_pair(r + 1, c));
//                 visited[r + 1][c] = 1;
//             }
//             if (r - 1 >= 0 && !visited[r - 1][c] && grid[r - 1][c] == 1) {
//                 q.push(make_pair(r - 1, c));
//                 visited[r - 1][c] = 1;
//             }
//             if (c + 1 <= cols && !visited[r][c + 1] && grid[r][c + 1] == 1) {
//                 q.push(make_pair(r, c + 1));
//                 visited[r][c + 1] = 1;
//             }
//             if (c - 1 >= 0 &&!visited[r][c - 1] && grid[r][c - 1] == 1) {
//                 q.push(make_pair(r, c - 1));
//                 visited[r][c - 1] = 1;
//             }
//         }

//         return in;
//     }
// };