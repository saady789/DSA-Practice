//always remember the monotonic stack concept 

// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& arr) {
//         int n = arr.size();
//         for(int i=0;i<n;i++) { arr.push_back(arr[i]); } //create a copy of entire stack
//         vector<int>ans;
//         stack<int>st;

//         for(int i=arr.size()-1;i>=0;i--){
//                 if(st.empty()) {
//                     ans.push_back(-1);
//                 }
//                 else {
//                     while(!st.empty() && arr[i] >= st.top() ) {st.pop();}
//                     if(st.empty())  ans.push_back(-1);
//                     else  ans.push_back(st.top());

//                 }

//             st.push(arr[i]);

//         }
//         int start =0;
//         int end = ans.size()-1;
//         while(start<=end) {swap(ans[start],ans[end]); start++; end--; }
//         for(int i=0;i<n;i++) { ans.pop_back();}
//         return ans;

//     }
// };