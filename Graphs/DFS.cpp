// void DFS(int index,vector<int> adj[],vector<bool> &visited,vector<int> &ans){
//     if(visited[index] == false){
//         visited[index] = true;
//         ans.push_back(index);
//     }
//     for(int i:adj[index]){
//         if( visited[i] == false ) {
//             DFS(i,adj,visited,ans);
//         }
//     }
// }
// vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//     vector<bool> visited(V,false); //visited array
//     vector<int> ans; // answer array
//     DFS(0,adj,visited,ans);
//     return ans;
// }