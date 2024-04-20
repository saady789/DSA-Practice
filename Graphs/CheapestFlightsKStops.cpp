// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
//                           int k) {
//         vector<pair<int, int>> adjList[n];
//         vector<int> dist(n, INT_MAX);
//         for (int i = 0; i < flights.size(); i++) {
//             adjList[flights[i][0]].push_back(
//                 make_pair(flights[i][1], flights[i][2]));
//         }
//         priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
//                        greater<tuple<int, int, int>>>
//             q;
//         // stop,node,distance
//         q.push(make_tuple(0, src, 0));
//         dist[src] = 0;
//         while (!q.empty()) {
//             auto [stop, node, dis] = q.top();
//             q.pop();
//             if (stop > k) {
//                 continue;
//             }

//             for (auto [n,d] : adjList[node]) {
//                 if(d+dis < dist[n] ){
//                     dist[n] = d+dis;
//                     q.push({stop+1,n,dist[n]});
//                 }
//             }
//         }
//         return dist[dst]==INT_MAX ? -1 : dist[dst];

//     }
// };