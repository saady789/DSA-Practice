// int minimumMultiplications(vector<int>& arr, int start, int end) {
//   vector<int> n(100000,INT_MAX);
//   n[start] = 0;
//   priority_queue<pair<int, int>, vector<pair<int, int>>,
//                   greater<pair<int, int>>> q;
//   q.push({n[start],start}); //<node,minimum>
//   while(!q.empty()){
//       auto it = q.top();
//       q.pop();
//       int node = it.second;
//       int times = it.first;
//       for(int i:arr){
//           if(times+1< n[(node*i)%100000] ){
//               n[(node*i)%100000] = times + 1;
//               q.push({ n[(node*i)%100000],(node*i)%100000});
//           }
//       }
//   }
//   if(n[end] != INT_MAX) return n[end];
// return -1;

// }