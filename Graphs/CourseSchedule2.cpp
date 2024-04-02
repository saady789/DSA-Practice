// class Solution {
// public:
//     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<int> ans;
//         vector<int> inDegree(numCourses,0);
//         vector<int> adjList[numCourses];
//         queue<int> q;
//         for(int i=0;i<prerequisites.size();i++){
//             int n1 = prerequisites[i][0];
//             int n2 = prerequisites[i][1];
//             inDegree[n2]++;
//             adjList[n1].push_back(n2);
//         }
//         for(int i=0;i<inDegree.size();i++){
//             if(inDegree[i]==0) q.push(i);
//         }
//         while(!q.empty()){
//             int t = q.front();
//             q.pop();
//             ans.push_back(t);
//             for(int i:adjList[t]){
//                 inDegree[i]--;
//                 if(inDegree[i]==0) q.push(i);
//             }

//         }
//         if(ans.size() == numCourses){
//             reverse(ans.begin(),ans.end());
//             return ans;
//         } 
//         return {};

//     }
// };