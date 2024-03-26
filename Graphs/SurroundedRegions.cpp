// class Solution {
// public:
//     void Capture(int row,int col,vector<vector<char>>& board,vector<vector<int>>& visited){
//         int rows = board.size()-1;
//         int cols = board[0].size()-1;
//         vector<pair<int,int>> memo ;
//         queue<pair<int,int>> q; //row,col
//         q.push(make_pair(row,col));
//         visited[row][col] = 1;
//         bool reverse = false;
//         while(!q.empty()){
//             auto it = q.front();
//             q.pop();
//             int r = it.first;
//             int c = it.second;
//             board[r][c] = 'X';
//             visited[r][c] = 1;
//             memo.push_back(make_pair(r,c));
//             if(r==rows || r==0 || c==0 || c==cols) reverse = true;
//             //handle all the 4 cases
//             if(r+1<=rows && visited[r+1][c]==0 && board[r+1][c]=='O') { visited[r+1][c]=1;q.push(make_pair(r+1,c)); }
//             if(r-1>=0 && visited[r-1][c]==0 && board[r-1][c]=='O') { visited[r-1][c]=1;q.push(make_pair(r-1,c)); }
//             if(c+1<=cols && visited[r][c+1]==0 && board[r][c+1]=='O') { visited[r][c+1]=1;q.push(make_pair(r,c+1)); }
//             if(c-1>=0 && visited[r][c-1]==0 && board[r][c-1]=='O') { visited[r][c-1]=1;q.push(make_pair(r,c-1)); }
//         }
//         if(reverse){
//             for(auto it:memo){
//                 board[it.first][it.second] = 'O';
//             }
//         }
//     }
//     void solve(vector<vector<char>>& board) {
//         vector<vector<int>> visited(board.size(),vector<int>(board[0].size(),0)); //visited array 
//         for(int i=0;i<board.size();i++){
//             for(int j=0;j<board[i].size();j++){
//                 if(visited[i][j] == 0 && board[i][j]=='O'){ Capture(i,j,board,visited); }
//             }
//         }

//     }
// };