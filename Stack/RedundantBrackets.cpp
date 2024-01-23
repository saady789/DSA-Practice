// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack<char> myStack;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(' || s[i]=='+' || s[i]=='-' ||s[i]=='*' || s[i]=='/') myStack.push(s[i]);

//         if(s[i]==')'){
//             if(myStack.top()=='(') return true;
//             else {
//                 while(myStack.top()!='('){
//                     myStack.pop();
//                 }

//             }
//             myStack.pop();
//         }
//     }
//     return false;
// }
