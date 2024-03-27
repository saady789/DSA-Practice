// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         vector<bool> visited(graph.size(),false) ;
//         vector<int> colored(graph.size(),-1) ; //-1 for uncolored | 0 for black | 1 for white 
//         queue<pair<int,int>> q; //<node,parent>


//         for(int i=0;i<visited.size();i++){
//             if(!visited[i]){
//                 q.push(make_pair(i,-1));
//                 while(!q.empty()){
//             auto it = q.front();
//             q.pop();
//             int node = it.first;
//             visited[node] = true;
//             int parent = it.second;
//             if(parent==-1){
//                 colored[node] = 1; //color with either 0 or 1

//             } else {
//                 if(colored[parent]==0) colored[node] = 1;
//                 if(colored[parent]==1)colored[node] = 0; 
//             }
//             int clrNode = colored[node];
//             for(int i=0;i<graph[node].size();i++){ // this loop checks for same color
//                 if(colored[graph[node][i]]==clrNode) return false;
//             }
//             for(int i=0;i<graph[node].size();i++){ // this loop checks for same visited and insert into the stack
//                 if(!visited[graph[node][i]]){
//                     visited[graph[node][i]] = true;
//                     q.push(make_pair(graph[node][i],node));
//                 }
//             }


//         }
//             }
//         }
//         return true;
//     }
// };