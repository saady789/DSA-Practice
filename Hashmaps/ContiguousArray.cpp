// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {

//         unordered_map<int,int> mp; //<difference,index>
//         mp[0] = -1;
//         int status = 0;
//         int max = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0) status++;
//             if(nums[i]==1) status--;

//             if(mp.find(status) == mp.end()) {
//                 mp[status] = i;
//             }
//             else{
//                 if(i - mp[status] > max) max = i-mp[status];
//             }
//         }
//         return max;
//     }
// };