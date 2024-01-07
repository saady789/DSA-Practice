
// bool isPossible(vector<int> arr,int distance,int cows) {

// int cowPtr=2;
// int positions = arr.size() - 1;
// int positionPtr = 1;
// int lastPos = arr[0];
// for (int i = 1; i < arr.size(); i++) {

//   if (arr[i] - lastPos >= distance) {
//       lastPos = arr[i];
//       cowPtr++;
//           if(cowPtr>cows) return true;


//   }
//   else continue;
//    positionPtr++;
// }
// return false;

// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(),stalls.end());

//     int s = 0;
//     int e = stalls[stalls.size() - 1] - stalls[0]; // Set e to a valid maximum distance possible
//     int a = -1;

//     int m = s + (e-s)/2;
//     while (s <= e) {
//         m = s + (e-s)/2;

//         if (isPossible(stalls,m,k)) {
//             a = m;
//             s = m + 1;

//         } else {
//         e = m - 1;
//         }
//     }
//     return a;

// }