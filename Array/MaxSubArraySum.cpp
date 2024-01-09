// long long maxSubarraySum(vector<int> arr, int n) {
//     long long int ans;
//     int sum = 0;
//     int max = 0; // Initialize max with the first element of the array

//     for (int i = 0; i < arr.size(); i++) {
//         sum = sum + arr[i];
//         if (sum > max) {
//             max = sum;
//         }
//         if (sum < 0) {
//             sum = 0;
//         }
//     }

//     ans = max;
//     return ans;
// }