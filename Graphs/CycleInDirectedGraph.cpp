// void detectCycle(vector<int>adjList[],int node,vector<int>&visited,vector<int>&path,int &ans) {

//   if (path[node] == 1) { ans = 1;return;} 
//   if(visited[node]) return;
//   path[node] = 1;
//   visited[node] = 1;
//   for (int i : adjList[node]) {
//      detectCycle(adjList,i,visited,path,ans); 

//   }
//   path[node]=0 ;
// }
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//   vector<int> adjList[n];
//   for (auto i : edges) {
//   int n1 = i.first-1;
//   int n2 = i.second-1;
//   adjList[n1].push_back(n2);
//   }
//   vector<int> visited(n,0); //0 for unvisied and 1 for visited ;
//   vector<int> path(n,0); // a copy will be stored for every iteration in deth first search 

//   int answer = 0;
//   for (int i = 0; i < n; i++) {
//   if (!visited[i]) { detectCycle(adjList,i,visited,path,answer); }
//   if (answer) break;
//   }
//   return answer;

// }