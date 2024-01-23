// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans(nums1.size());
//         unordered_map<int,int> mp;
//         stack<int> st;
//         int element;
//         int index;
//         for(int i=0;i<nums1.size();i++){ mp[nums1[i]] = i ; }

//         for(int i=nums2.size()-1;i>=0;i--){
//             if(mp.count(nums2[i])){
//                 index = mp[nums2[i]];
//                 if(st.empty()) {
//                     ans[index] = -1;
//                 }
//                 else {
//                     while(!st.empty() && nums2[i] > st.top() ) {st.pop();}
//                     if(st.empty()) ans[index] = -1;
//                     else ans[index] = st.top();

//                 }
//             } 
//             st.push(nums2[i]);

//         }

//     return ans;

//     }
// };