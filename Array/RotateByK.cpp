// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> arr (nums.size(),0);
//         int n = nums.size();
//         for(int i=0;i<nums.size();i++){
//             arr[(i+k)%n] = nums[i];
//         }

//         for(int i=0;i<nums.size();i++){
//             nums[i] = arr[i];
//         }
//     }
// };