// int floorSqrt(int n) {
//     if (n == 0 || n == 1) {
//         return n;
//     }

//     int start = 1;
//     int end = n;
//     int result = 0;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (mid <= n/mid) {
//             start = mid + 1;
//             result = mid;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return result;
// }
