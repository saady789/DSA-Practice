// string FirstNonRepeating(string A){
//   unordered_map<char,int> mp;
//   queue<char> q;
//   string ans = "";

//   for(int i=0;i<A.length();i++){
//       q.push(A[i]);
//       mp[A[i]]++;

//       while(!q.empty()){
//           char ch = q.front();
//           if(mp[ch] > 1) q.pop();
//           else break;
//       }
//       if(q.empty()) ans.push_back('#');
//       else ans.push_back(q.front());

//   }

//   return ans;
