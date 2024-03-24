// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int rows = mat.size()-1;
//         int cols = mat[0].size()-1;
//         queue<tuple<int,int,int>> q; //row,col,distance
//         vector<vector<int>> distance(rows+1,vector<int>(cols+1,0));
//         vector<vector<int>> visited(rows+1,vector<int>(cols+1,0));
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[i].size();j++){
//                 if(mat[i][j] == 1) continue;
//                 else{
//                     q.push(make_tuple(i,j,0));
//                     visited[i][j] = 1;
//                 }
//             }
//         }
//         while(!q.empty()){
//             auto it = q.front();
//             q.pop();
//             int row = get<0>(it);
//             int col = get<1>(it);
//             int d = get<2>(it);
//             distance[row][col] = d;
//             //now manage all the 4 cases 
//             if(row+1<=rows && visited[row+1][col]==0 ) {q.push(make_tuple(row+1,col,d+1));visited[row+1][col]=1;}
//             if(row-1>=0 && visited[row-1][col]==0 ) {q.push(make_tuple(row-1,col,d+1));visited[row-1][col]=1;}
//             if(col+1<=cols && visited[row][col+1]==0 ) {q.push(make_tuple(row,col+1,d+1));visited[row][col+1]=1;}
//             if(col-1>=0 && visited[row][col-1]==0 ) {q.push(make_tuple(row,col-1,d+1));visited[row][col-1]=1;}



//         }
//         return distance;




//     }
// };