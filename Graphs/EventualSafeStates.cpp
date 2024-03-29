// class Solution {
// public:
//     bool dfs(int node, vector<int>& state, vector<vector<int>>& graph) {
//         if (state[node] != 0) {
//             return state[node] == 2;
//         }

//         state[node] = 1; // Mark as visiting

//         for (int neighbor : graph[node]) {
//             if (!dfs(neighbor, state, graph)) {
//                 return false;
//             }
//         }

//         state[node] = 2; // Mark as visited and safe

//         return true;
//     }

//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vector<int> state(n, 0); // 0 for unvisited, 1 for visiting, 2 for visited and safe

//         vector<int> ans;

//         for (int i = 0; i < n; ++i) {
//             if (dfs(i, state, graph)) {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };
