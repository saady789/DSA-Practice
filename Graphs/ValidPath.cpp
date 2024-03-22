// class Solution {
// public:
//     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//         vector<int> AdjList[n];
//         for(int i=0;i<edges.size();i++){
//             int n1 = edges[i][0];
//             int n2 = edges[i][1];
//             AdjList[n1].push_back(n2);
//             AdjList[n2].push_back(n1);
//         }
//         queue<int> q;
//         vector<bool> visited(n,false);
//         q.push(source);
//         visited[source] = true;
//         while(!q.empty()){
//                 int front = q.front();
//                 visited[front] = true;
//                 q.pop();
//                 if(front == destination) return true;
//                 for(int i=0;i<AdjList[front].size();i++){
//                     if(!visited[AdjList[front][i]]){visited[AdjList[front][i]] = true; q.push(AdjList[front][i]); }

//                 }



//         }
//         return false;

//     }
// };