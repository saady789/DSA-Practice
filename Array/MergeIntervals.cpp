//   vector<vector<int>> merge(vector<vector<int>>& intervals) {

//         if(intervals.size()==1){
//             vector<vector<int>> myAns;
//             myAns.push_back(intervals[0]);
//             return myAns;
//         }
//          sort(intervals.begin(), intervals.end());
//         vector<vector<int>> answer ;
//         int n1;
//         int n2;
//         int n = intervals.size()-1;
//         int i=1;
//         while (i <= n) {
//             if(intervals[i-1][1] >= intervals[i][0]){ //merge possible
//                 n1 = intervals[i-1][0];
//                 if(intervals[i][1]>intervals[i-1][1]){
//                     n2 = intervals[i][1];
//                 }
//                 else n2 = intervals[i-1][1];
//                 // answer.push_back({n1,n2});
//                 intervals[i][0] = n1;
//                 intervals[i][1] = n2;
//                 i++;

//             }   
//             else { //the merging is not possible at all

//                 n1 = intervals[i-1][0];
//                 n2 = intervals[i-1][1];
//                 answer.push_back({n1,n2});
//                 i++;
//             }
//         }
//         answer.push_back(intervals[n]);

//         return answer;
//     }
// };