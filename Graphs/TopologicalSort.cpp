// vector<int> topologicalSort(vector<pair<int,int>>& edges, int N, int M)
// {
//   vector<int> inDegree(N+1,0);
//   vector<int> adjList[N+1];
//   queue<int> q;
//   vector<int> ans;
//   for(int i=0;i<edges.size();i++){
//     int n1 = edges[i].first;
//     int n2 = edges[i].second;
//     inDegree[n2]++;
//     adjList[n1].push_back(n2);
//   }
//   for(int i=1;i<inDegree.size();i++){
//     if(inDegree[i]==0) q.push(i);
//   }
//   while(!q.empty()){
//     int t = q.front();
//     q.pop();
//     ans.push_back(t);
//     for(int i:adjList[t]){
//       inDegree[i]--;
//       if(inDegree[i]==0) q.push(i);
//     }

//   }

//   return ans;
// } 
