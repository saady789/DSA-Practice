// class SpecialStack {
//     public:
//         stack<int> st;
//         int mini ;
//     void push(int data) {
//         if(st.empty()) {
//             mini = data;
//             st.push(mini);
//         }
//         else {
//             if(data>=mini) st.push(data);
//             else {
//                 st.push(mini-data);mini = data;
//             }
//         }
//     }

//     void pop() {
//         if(st.top()>=mini) st.pop();
//         else {
//             mini = mini + st.top();st.pop();
//         }
//     }

//     int top() {
//         return st.top();

//     }

//     int getMin() {
//         return mini;
//     }  
// }; 