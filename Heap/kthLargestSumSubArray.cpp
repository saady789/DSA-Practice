// #include <queue>
// int getKthLargest(vector<int> &arr, int k)
// {
//    priority_queue<int, vector<int>, greater<int>> pq;
//   int p = 0;
//         for (int i = 0; i < arr.size(); i++) {
//       int sum = 0;
//           for (int j = i; j< arr.size() ; j++) {
//         sum += arr[j];
//         if(p<k){
//         pq.push(sum);p++;
//                   } else if (sum > pq.top()) {
//                   pq.pop();
//           pq.push(sum);
//           }
//           }

//         }
//     return pq.top();
// }