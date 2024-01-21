// #include <vector>

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i = 0;
//         vector<int> answer;
//         unordered_map<int, int> myMap;
//         int t;
//         for (int i = 0; i < nums.size(); i++) {
//             t = target - nums[i];
//             auto it = myMap.find(t);
//             if (it != myMap.end()) {
//                 return {it->second, i};
//             } else {
//                 myMap[nums[i]] = i;
//             }
//         }

//         return answer;
//     }
// };
