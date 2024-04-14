// std::vector<int> shortestPath(int N, int M, std::vector<std::vector<int>>& edges) {
//     std::vector<int> inDegree(N, 0);
//     std::vector<std::pair<int, int>> adjList[N]; // pair<node, weight>
//     std::queue<int> q;
//     std::vector<int> topo; // This array contains the topo sort

//     // Construct the graph and compute in-degree
//     for(int i = 0; i < edges.size(); i++) {
//         int n1 = edges[i][0];
//         int n2 = edges[i][1];
//         int w = edges[i][2];

//         inDegree[n2]++;
//         adjList[n1].push_back(std::make_pair(n2, w));
//     }

//     // Initialize the queue with nodes having in-degree 0
//     for(int i = 0; i < N; i++) {
//         if(inDegree[i] == 0) {
//             q.push(i);
//         }
//     }

//     // Perform topological sort
//     while(!q.empty()) {
//         int t = q.front();
//         q.pop();
//         topo.push_back(t);

//         for(auto it : adjList[t]) {
//             inDegree[it.first]--;
//             if(inDegree[it.first] == 0) {
//                 q.push(it.first);
//             }
//         }
//     }

//     std::vector<int> ans(N, INT_MAX);
//     ans[0] = 0;

//     // Calculate shortest paths
//     for(int i = 0; i < topo.size(); i++) {
//         int currNode = topo[i];
//         if(ans[currNode] == INT_MAX) continue;

//         for(auto it : adjList[currNode]) {
//             int nextNode = it.first;
//             int wt = it.second;

//             if(ans[currNode] + wt < ans[nextNode]) {
//                 ans[nextNode] = ans[currNode] + wt;
//             }
//         }
//     }

//     // Handle nodes that are not reachable
//     for(int i = 0; i < N; i++) {
//         if(ans[i] == INT_MAX) {
//             ans[i] = -1;
//         }
//     }

//     return ans;
// }