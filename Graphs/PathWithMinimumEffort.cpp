// class Solution {
// public:
//     int minimumEffortPath(vector<vector<int>>& heights) {
//         int rows = heights.size();
//         int cols = heights[0].size();

//         // Vector to store minimum effort to reach each cell
//         vector<vector<int>> effort(rows, vector<int>(cols, INT_MAX));
//         effort[0][0] = 0; // Starting cell

//         // Priority queue to keep track of cells to explore
//         priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
//                        greater<tuple<int, int, int>>>
//             pq;
//         pq.push(make_tuple(0, 0, 0)); // (effort, row, col)

//         // 4-directions: up, down, left, right
//         vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

//         while (!pq.empty()) {
//             auto [e, r, c] = pq.top();
//             pq.pop();

//             // Reached destination
//             if (r == rows - 1 && c == cols - 1) {
//                 return e;
//             }

//             // Check neighbors
//             for (auto [dr, dc] : dirs) {
//                 int nr = r + dr, nc = c + dc;

//                 if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
//                     int ne = max(e, abs(heights[r][c] - heights[nr][nc]));

//                     if (ne < effort[nr][nc]) {
//                         effort[nr][nc] = ne;
//                         pq.push(make_tuple(ne, nr, nc));
//                     }
//                 }
//             }
//         }

//         return -1; // Shouldn't reach here
//     }
// };