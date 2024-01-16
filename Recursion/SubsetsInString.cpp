// class Solution {
// public:

//     void subSets(vector<vector<int>> &answer,vector<int> arr, vector<int> output,int index){
//        //base case
//        if(index>arr.size()-1) {
//            answer.push_back(output);return;
//        }

//        //recursive calls 
//        subSets(answer,arr,output,index+1);
//        output.push_back(arr[index]);
//        subSets(answer,arr,output,index+1);
//     }


//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> res ;
//         if(nums.size()==1) {
//             res.push_back({});
//             res.push_back({nums[0]});
//             return res;
//         }
//         vector<int> output ;

//         subSets(res,nums,output,0);

//         return res;

//     }
// };