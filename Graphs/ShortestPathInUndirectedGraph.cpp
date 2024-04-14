// vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
//     vector<int> adjList[N];
//     for(int i=0;i<edges.size();i++){
//         int n1 = edges[i][0];
//         int n2 = edges[i][1];
//         adjList[n1].push_back(n2);
//         adjList[n2].push_back(n1);
//     }
//     vector<int> ans(N,INT_MAX);
//     queue<pair<int,int>> q; //<node,distance>
//     ans[src] = 0;
//     q.push(make_pair(src,ans[src]));

//     while(!q.empty()){
//         auto it = q.front();
//         int n = it.first;
//         int distance = it.second;
//         q.pop();
//         for(int i:adjList[n]){
//             if(distance+ 1 < ans[i] ){ 
//                 ans[i] = distance+ 1 ;
//                 q.push(make_pair(i,ans[i]));

//             }
//         }


//     }
//     for(int i=0;i<ans.size();i++){
//         if(ans[i] == INT_MAX) ans[i] = -1;
//     }
//     return ans;
// }