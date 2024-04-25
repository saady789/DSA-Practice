// class Solution {
// public:
//     int findParent(int i, vector<int>& parent) {
//         if (i == parent[i])
//             return i;
//         return parent[i] = findParent(parent[i], parent);
//     }
//     int makeConnected(int n, vector<vector<int>>& connections) {
//         vector<int> size(n, 1);
//         vector<int> parent(n, 0);
//         for (int i = 0; i < n; i++) {
//             parent[i] = i;
//         }
//         int extra = 0;
//         int req = 0;
//         for (vector<int> arr : connections) {
//             int node1 = arr[0];
//             int node2 = arr[1];
//             int pn1 = findParent(node1, parent);
//             int pn2 = findParent(node2, parent);
//             if (pn1 == pn2) {
//                 extra++;
//                 continue;
//             }
//             if (size[pn1] < size[pn2]) {
//                 parent[pn1] = pn2;
//                 size[pn2] += size[pn1];
//             } else {
//                 parent[pn2] = pn1;
//                 size[pn1] += size[pn2];
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (parent[i] == i)
//                 req++;
//         }

//         if (extra >= req-1)
//             return req-1;
//         else
//             return -1;
//     }
// };