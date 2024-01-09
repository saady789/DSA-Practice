// #include <bits/stdc++.h> 
// using namespace std;

// int minimizeIt(vector<int> arr, int K) {
//     sort(arr.begin(), arr.end());
//     int minDiff = INT_MAX;

//     for (int i = 0; i < arr.size(); ++i) {
//         vector<int> modifiedArr = arr; // Create a copy of the original array

//         // Increase elements up to i by K and decrease elements after i by K
//         for (int j = 0; j <= i; ++j) {
//             modifiedArr[j] += K;
//         }
//         for (int k = i + 1; k < arr.size(); ++k) {
//             if (modifiedArr[k] - K < 0) {
//                 modifiedArr[k] += K;
//             } else {
//                 modifiedArr[k] -= K;
//             }
//         }

//         int minVal = *min_element(modifiedArr.begin(), modifiedArr.end());
//         int maxVal = *max_element(modifiedArr.begin(), modifiedArr.end());

//         minDiff = min(minDiff, maxVal - minVal);
//     }

//     return minDiff;
// } 