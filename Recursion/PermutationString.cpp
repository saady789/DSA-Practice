// class Solution {
// public:
//     void solve(vector<int> nums,vector<vector<int>> &answer,int index) {
//         //base case
//         if(index==nums.size()){
//             answer.push_back(nums);return;
//         }

//         //processing and recursive calls
//         for(int i=index;i<nums.size();i++){
//             swap(nums[i],nums[index]);
//             solve(nums,answer,index+1);
//             swap(nums[i],nums[index]);

//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> answer;
//         if(nums.size()==1) {
//             answer.push_back(nums);
//             return answer;
//         }
//         solve(nums,answer,0);
//         return answer;
//     }
// };