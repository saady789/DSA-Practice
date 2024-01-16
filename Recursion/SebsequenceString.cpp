// #include <bits/stdc++.h> 

// void solve(string str,vector<string> &answer,string output,int index){
//   //base case
//   if (index > str.size() - 1) {
//     if (!output.empty()) {  
//       answer.push_back(output);
//     }
//     return;
//   }


//   //recursive call
//   solve(str,answer,output,index+1);
//   output.push_back(str[index]);
//   solve(str,answer,output,index+1);


// }

// vector<string> subsequences(string str){
//   vector<string> answer;
//   if(str.length()==1) {
//         answer.push_back(str);
//         return answer;
//     }
//     string output;
//     solve(str,answer,output,0);
//     return answer;

// }
