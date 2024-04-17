// vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
// {
//     vector<int> distance(V,INT_MAX);
//     queue<pair<int,int>> q;
//     q.push(make_pair(S,0));
//     distance[S] = 0;
//     while(!q.empty()){
//         auto it = q.front();
//         q.pop();
//         int nodeP = it.first;
//         int w = it.second;
//         for(vector<int> arr:adj[nodeP]){
//             int w2 = arr[1];
//             int nodeT = arr[0];
//             if(w+w2 < distance[nodeT]) { distance[nodeT] = w+w2;

//                 q.push(make_pair(nodeT,distance[nodeT]));
//             }
//         }
//     }
//     return distance;
// }