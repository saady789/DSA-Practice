// class Solution {
// public:
//     int sumOfUnique(vector<int>& nums) {
//         map<int,int> mp;//<value,frequency>
//         for(int i=0;i<nums.size();i++){
//             if(mp.find(nums[i]) == mp.end()){
//                 mp[nums[i]] = 1;
//             }
//             else mp[nums[i]]++;
//         }
//         int sum = 0;
//         for(auto i:mp){
//             if(i.second == 1) sum += i.first;
//         }
//         return sum;
//     }
// };