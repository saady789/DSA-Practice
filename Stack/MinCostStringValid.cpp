// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
//   if(str.length()%2!=0) return -1;
//   int count = 0;
//   int c = 0;
//   stack<char> st;
//   int open = 0;
//   int close = 0;

//   for(int i=0;i<str.length();i++){

//     if (str[i] == '{')
//       st.push(str[i]);
//     if (str[i] == '}'){
//       if(st.empty()){ st.push(str[i]); }
//       else if (st.top()=='{') st.pop();
//       else st.push(str[i]);
//     } 
//   }

//   while(!st.empty()){
//     if(st.top()=='{') open++;
//     else close++;
//     st.pop();
//   }

//   int ans = (open+1)/2 + (close+1)/2;
//   return ans;




//   }

