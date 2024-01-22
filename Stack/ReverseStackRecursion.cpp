// void insertBottom(stack<int> &myStack,int x){
//     //base case 
//     if(myStack.empty()) {myStack.push(x);return;}
//     //processing + recursive calls 
//     int i = myStack.top();
//     myStack.pop();
//     insertBottom(myStack,x);
//     myStack.push(i);
// }

// void reverseStack(stack<int> &myStack) {
//     //base case 
//     if(myStack.empty()) return;

//     //processing + recursive calls
//     int x = myStack.top();
//     myStack.pop();
//     reverseStack(myStack);
//     insertBottom(myStack,x);

// }