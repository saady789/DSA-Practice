// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         int sr = 0;
//         int sc = 0;
//         int dr = grid.size() - 1; int dc = grid.size() - 1;
//         if(grid[sr][sc]==1 || grid[dr][dc]==1) return -1;
//         int distance = INT_MAX;
//         queue<tuple<int, int, int>> q; //<row,col,distance>
//         q.push(make_tuple(sr, sc, 1));
//         grid[sr][sc] = 1;
//         while (!q.empty()) {
//             auto it = q.front();
//             q.pop();
//             int r = get<0>(it) ;
//             int c = get<1> (it);
//             int d = get<2> (it);
//             // base check
//             if (r == dr && c == dc && d < distance) {
//                 distance = d;
//             }
//             // check all the 8 cases
//             if (r + 1 <= dr && grid[r + 1][c] == 0) {
//                 grid[r + 1][c] = 1;
//                 q.push(make_tuple(r + 1, c, d + 1));
//             }
//             if (r - 1 >= 0 && grid[r - 1][c] == 0) {
//                 grid[r - 1][c] = 1;
//                 q.push(make_tuple(r - 1, c, d + 1));
//             }
//             if (c + 1 <= dc && grid[r][c + 1] == 0) {
//                 grid[r][c + 1] = 1;
//                 q.push(make_tuple(r, c + 1, d + 1));
//             }
//             if (c - 1 >= 0 && grid[r][c - 1] == 0) {
//                 grid[r][c - 1] = 1;
//                 q.push(make_tuple(r, c - 1, d + 1));
//             }

//             if(r-1>=0 && c-1>=0 && grid[r-1][c-1]==0 ){
//                 grid[r-1][c - 1] = 1;
//                 q.push(make_tuple(r-1, c - 1, d + 1));
//             }
//             if(r-1>=0 && c+1<=dc && grid[r-1][c+1]==0 ){
//                 grid[r-1][c + 1] = 1;
//                 q.push(make_tuple(r-1, c + 1, d + 1));
//             }
//             if(r+1<=dr && c+1<=dc && grid[r+1][c+1]==0 ){
//                 grid[r+1][c + 1] = 1;
//                 q.push(make_tuple(r+1, c + 1, d + 1));
//             }
//             if(r+1<=dr && c-1>=0 && grid[r+1][c-1]==0 ){
//                 grid[r+1][c - 1] = 1;
//                 q.push(make_tuple(r+1, c - 1, d + 1));
//             }
//         }
//         if(distance==INT_MAX) return -1;
//         return distance;
//     }
// };