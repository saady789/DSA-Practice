// vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
//     int n = V-1;
//     vector<int> distance(V,10e7);
//     distance[S] = 0;
//     for(int i=1;i<=n;i++){
//         int flag = 0;
//         for(int j=0;j<edges.size();j++){
//             int node1 = edges[j][0];
//             int node2 = edges[j][1];
//             int w = edges[j][2];

//             if(distance[node1] != 10e7&&distance[node1] + w < distance[node2]) {
//                 distance[node2] = distance[node1]+w;
//                 flag=1;
//             }

//         }
//         if(flag==0) break;
//     }

//     int flag = 0;
//         for(int i=0;i<edges.size();i++){
//             int node1 = edges[i][0];
//             int node2 = edges[i][1];
//             int w = edges[i][2];

//             if(distance[node1] != 10e7&&distance[node1] + w < distance[node2]) {
//                 return {-1};
//             }

//         }


//     return distance;

// }