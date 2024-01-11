// We can follow the below steps -

// Scan the array from right to left until an element is found which is smaller than the index at its right. Mark the index of such element as index.
// Again scan the array from right to left until an element is found which is greater than the element found in the above step. Mark the index of such elements as j.
// Swap the two elements at indices index and j.
// Now, reverse the array from index index until the end of the array.
// Let’s understand this with an example -



// #include <bits/stdc++.h> 
// vector<int> nextPermutation(vector<int> &arr, int n)
// {

//    if(arr.size()==1) return arr;
//         int flag = 0;
//         for (int k = 0; k <= arr.size() - 2; k++) {
//             if (arr[k] < arr[k + 1]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) { // return
//             sort(arr.begin(),arr.end());
//             return arr;
//         }
//         int n1 = -1;
//         int n2 = -1;
//         int s = arr.size() - 1;
//         for (int i = s - 1; i >= 0; i--) {
//             if (arr[i] < arr[i + 1]) {
//                 n1 = i;
//                 break;
//             }
//         }

//         for (int j = s; j > n1; j--) {
//             if (arr[j] > arr[n1]) {
//                 n2 = j;
//                 break;
//             }
//         }

//         swap(arr[n1], arr[n2]);

//         int start = n1 + 1;
//         int end = arr.size() - 1;
//         while (start <= end) {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }

//         return arr;
// }