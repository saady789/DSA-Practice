// class Solution {
// public:
//     vector<int> nextSmaller(vector<int> h) {
//         int n = h.size();
//         vector<int> answer;
//         stack<int> st;
//         for (int i = n - 1; i >= 0; i--) {
//             if (st.empty())
//                 answer.push_back(-1);
//             else {
//                 while (!st.empty() && h[st.top()] >= h[i])
//                     st.pop();
//                 if (st.empty())
//                     answer.push_back(-1);
//                 else
//                     answer.push_back(st.top());
//             }
//             st.push(i);
//         }
//         std::reverse(answer.begin(), answer.end());
//         return answer;
//     }
//     vector<int> prevSmaller(vector<int> h) {
//         int n = h.size();
//         vector<int> answer;
//         stack<int> st;

//         for (int i = 0; i < n; i++) {
//             if (st.empty())
//                 answer.push_back(-1);
//             else {
//                 while (!st.empty() && h[st.top()] >= h[i])
//                     st.pop();
//                 if (st.empty())
//                     answer.push_back(-1);
//                 else
//                     answer.push_back(st.top());
//             }
//             st.push(i);
//         }
//         return answer;
//     }

//     int largestRectangleArea(vector<int>& heights) {
//         if (heights.size() == 1)
//             return heights[0];

//         vector<int> nextSm = nextSmaller(heights);
//         vector<int> prevSm = prevSmaller(heights);
//         int max = INT_MIN;
//         int temp;
//         for (int i = 0; i < heights.size(); i++) {

//             //case 1 
//             if(prevSm[i]!=-1 && nextSm[i]!=-1){
//                temp = nextSm[i] - prevSm[i] - 1 ;
//             }
//             //case 2
//             else if (prevSm[i]==-1 && nextSm[i]==-1){
//                 temp = heights.size();
//             }
//             //caes 3
//             else if(prevSm[i]==-1 && nextSm[i]!=-1){
//                 temp = nextSm[i] - 0;
//             }
//             //case 4
//             else if(prevSm[i]!=-1 && nextSm[i]==-1){
//                 temp = heights.size() - prevSm[i] - 1;
//             }
//             temp = temp * heights[i];
//             if (temp > max)
//                 max = temp;
//         }
//         return max;
//     }
// };