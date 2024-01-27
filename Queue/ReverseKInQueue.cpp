// class Solution
// {
//     public:

//     // Function to reverse first k elements of a queue.
//     queue<int> modifyQueue(queue<int> q, int k) {
//         stack<int> st;
//         int size = q.size();
//         int temp;
//         for(int i=1;i<=k;i++){
//             temp = q.front();
//             q.pop();
//             st.push(temp);
//         }
//         while(!st.empty()){
//             temp = st.top();
//             st.pop();
//             q.push(temp);
//         }
//         if(size==k) return q;
//         for(int i=k;i<=size;i++){
//             temp = q.front();
//             q.pop();
//             q.push(temp);
//         }
//         return q;

//     }
// };