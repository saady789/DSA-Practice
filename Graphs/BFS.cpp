// vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
//     vector<bool> visited(n,false); // visited array created 
//     queue<int> q; //queue for traversal
//     vector<int> ans; // answer array 
//     q.push(0);
//     while (!q.empty()) {
//     int temp = q.front();
//     if (visited[temp] != true) {
//         visited[temp] = true;
//         ans.push_back(temp);
//     }
//     q.pop();
//     for (int i = 0; i < adj[temp].size(); i++) {
//     if(!visited[adj[temp][i]]) q.push(adj[temp][i]);
//     }


//     }
//     return ans;
// }