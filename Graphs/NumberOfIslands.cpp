// class Solution {
// public:
//     void DFS(int row,int col,vector<vector<int>> &visited,vector<vector<char>>& grid){
//         int rows = grid.size();
//         int cols = grid[0].size();
//         //base case 
//         if(row>=rows || col>=cols || row<0 || col<0 || grid[row][col]=='0' || visited[row][col]==1) return;
//         //processing + recursive calls
//         visited[row][col] = 1;
//         DFS(row-1,col,visited,grid);
//         DFS(row+1,col,visited,grid);
//         DFS(row,col-1,visited,grid);
//         DFS(row,col+1,visited,grid);

//     }

//     int numIslands(vector<vector<char>>& grid) {
//         int count = 0;

//         vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(),0)); //used to store temporarily 
//         int rows = grid.size();
//         int cols = grid[0].size();

//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {

//                 if(grid[i][j]=='0') continue;
//                 if(grid[i][j]=='1' && visited[i][j]==0){
//                     count++;
//                     DFS(i,j,visited,grid);
//                 }

//             }
//         }
//         return count;
//     }
// };