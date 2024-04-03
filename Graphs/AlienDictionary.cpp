// string findOrder(string dict[], int N, int K) {
//   vector<int> adjList[K];
//   vector<int> inDegree(K,0);
//   for(int i=0;i<N-1;i++){
//       string str1 = dict[i];
//       string str2 = dict[i+1];
//       int len = min(str1.size(),str2.size());
//       for(int j=0;j<len;j++){
//           if(str1[j] != str2[j]){
//               adjList[str1[j]-'a'].push_back(str2[j]-'a');
//               inDegree[str2[j]-'a']++;
//               break;
//           }
//       }

//   }
//    queue<int> q;
//   for(int i=0;i<inDegree.size();i++){
//       if(inDegree[i] == 0) q.push(i);
//   }
// vector<int> ans;
// while(!q.empty()){
// int t = q.front();
// q.pop();
// ans.push_back(t);
// for(int i:adjList[t]){
// inDegree[i]--;
// if(inDegree[i]==0) q.push(i);
// }

// }
// string a = "";
// for(int i:ans){
// a += (i+'a');
// }
// return a;



// }