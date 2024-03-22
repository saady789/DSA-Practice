// // Function to detect cycle in an undirected graph.
// bool doesExist(int node,vector<int> &visited,vector<int> adj[]){
//    int V = adj->size();
//     // -1 for unvisited 0 for inside queue 1 for visited
//    queue<int> q;
//    q.push(node);
//    visited[node] = 1;
//    while(!q.empty()){
//        int front = q.front();
//        q.pop();
//        visited[front] = 1;
//        for(int i=0;i<adj[front].size();i++){
//            int n = adj[front][i];
//            if(visited[n]==-1){
//                visited[n] = 0;q.push(n);
//            }
//            else if(visited[n]==0){
//                return true;
//            }
//        }
//    }
//    return false;
// }

// bool isCycle(int V, vector<int> adj[]) {
//     vector<int> visited(V,-1);
//     for(int i=0;i<V;i++){
//         if(visited[i]!=1){
//             bool status = doesExist(i,visited,adj);
//             if(status) return true;
//         }
//     }
//     return false;


// }