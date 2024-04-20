// class Solution {
// public:
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>> matrix(n,vector<int>(n,INT_MAX));
//         for(int i=0;i<edges.size();i++){
//             matrix[edges[i][0]][edges[i][1]] = edges[i][2];
//             matrix[edges[i][1]][edges[i][0]] = edges[i][2];

//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 for(int k=0;k<n;k++){
//                     if(matrix[j][i]!=INT_MAX && matrix[i][k]!=INT_MAX){
//                         if(matrix[j][k]==INT_MAX || matrix[j][k] > matrix[j][i] + matrix[i][k]){
//                             matrix[j][k] = matrix[j][i] + matrix[i][k];
//                         }
//                     }
//                 }
//             }
//         }
//         vector<int> arr(n,0);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i!=j && matrix[i][j] <= distanceThreshold) {
//                     arr[i]++;

//                 }
//             }
//         }
//         int num =INT_MAX;
//         int node = -1;
//         for(int i=arr.size()-1;i>=0;i--){
//             if(arr[i]<num){
//                 num = arr[i];
//                 node = i;
//             }
//         }
//         return node;

//     }
// };