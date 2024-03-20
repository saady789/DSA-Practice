// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {

//         int time = 0;
//         int rows = grid.size();
//         int cols = grid[0].size();

//         vector<vector<bool>> visited(rows,vector<bool>(cols,false));
//         queue<pair<int,int>> q;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(grid[i][j] == 2) q.push(make_pair(i,j));
//             }
//         }
//         while(!q.empty()){
//             bool status = false;
//             int size = q.size();
//             for(int i=0;i<size;i++){
//                 auto it = q.front();
//                 q.pop();
//                 grid[it.first][it.second] = 2; //make it rotten

//                 //adding all the 4 cases 
//                 if(it.first+1<rows && !visited[it.first+1][it.second] && grid[it.first+1][it.second]==1) {
//                     q.push(make_pair(it.first+1,it.second));status=true;visited[it.first+1][it.second]=true;}

//                 if(it.first-1>=0 && !visited[it.first-1][it.second] && grid[it.first-1][it.second]==1) {
//                     q.push(make_pair(it.first-1,it.second));status=true;visited[it.first-1][it.second]=true;}

//                 if(it.second+1<cols && !visited[it.first][it.second+1] && grid[it.first][it.second+1]==1) {
//                     q.push(make_pair(it.first,it.second+1));status=true;visited[it.first][it.second+1]=true;}

//                 if(it.second-1>=0 && !visited[it.first][it.second-1] && grid[it.first][it.second-1]==1) {
//                     q.push(make_pair(it.first,it.second-1));status=true;visited[it.first][it.second-1]=true;}

//             }
//             if(status) time++;
//         }
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(grid[i][j] == 1) return -1;
//             }
//         }

//         return time;
//     }
// };