// class Solution {
// public:
//     int countPaths(int n, vector<vector<int>>& roads) {
//         const int MOD = 1e9 + 7;
//         vector<pair<int, int>> adj[n];
//         vector<long long> dis(n, LLONG_MAX);
//         vector<long long> ways(n, 0);

//         dis[0] = 0;
//         ways[0] = 1;

//         // Create the adjacency list
//         for (const auto& road : roads) {
//             adj[road[0]].push_back({road[2], road[1]});
//             adj[road[1]].push_back({road[2], road[0]});
//         }

//         priority_queue<pair<long long, long long>, vector<pair<long long,long long>>,
//                        greater<pair<long long, long long>>>
//             pq; //<dis,node>
//         pq.push({0, 0});

//         while (!pq.empty()) {
//             auto [dis1, node1] = pq.top();
//             pq.pop();

//             // if(dis1 > dis[node1]) {
//             //     continue;
//             // }

//             for (auto [dis2, node2] : adj[node1]) {
//                 long long newDis = dis1 + dis2;
//                 if (newDis == dis[node2]) {
//                     ways[node2] = (ways[node2] + ways[node1]) % MOD;
//                 }

//                 else if (newDis < dis[node2]) {
//                     dis[node2] = newDis;
//                     ways[node2] = ways[node1];
//                     pq.push({dis[node2], node2});
//                 }
//             }
//         }

//         return ways[n - 1] % MOD;
//     }
// };
