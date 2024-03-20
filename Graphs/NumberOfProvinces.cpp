// class Solution {
// public:
//     void DFS(int index, vector<int> adj[], vector<bool>& visited) {
//         if (visited[index] == false) {
//             visited[index] = true;
//         }
//         for (int i : adj[index]) {
//             if (visited[i] == false) {
//                 DFS(i, adj, visited);
//             }
//         }
//     }

//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int size = isConnected.size();
//         vector<int> adjList[size];
//         vector<bool> visited(size, false);
//         for (int i = 0; i < size; i++) {
//             for (int j = 0; j < size; j++) {
//                 if (i == j)
//                     continue;
//                 if (isConnected[i][j] == 1) {
//                     adjList[i].push_back(j);
//                     adjList[j].push_back(i);
//                 }
//             }
//         }
//         int count = 0;
//         for(int i=0;i<size;i++){

//             if(visited[i] == false){
//                 visited[i] = true;
//                 count++;
//                 DFS(i,adjList,visited);
//             }
//         }
//         return count;
//     }
// };