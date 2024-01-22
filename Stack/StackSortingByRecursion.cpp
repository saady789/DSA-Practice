// #include <bits/stdc++.h> 
// void insertElement(stack<int> &myStack,int element){
//   //base case 
//   if(myStack.empty()) {
//     myStack.push(element);return;
//   };

//   //processing + recursive call
//   int i = myStack.top();
//         if (i > element) {
//       myStack.pop();
//       insertElement(myStack,element);
//       myStack.push(i);
//         }
//     else {
//       myStack.push(element);return;
//     }


// }
// void sortStack(stack<int> &stack)
// {
//   //base case 
//   if(stack.empty()) return;

//   //processing + recursive call
//   int i = stack.top();
//   stack.pop();
//   sortStack(stack);
//   insertElement(stack,i);

// }