// vector<int> selectionSort(vector<int> arr, int j) {
//     // base case
//     if (j == arr.size() - 1) {
//         return arr;
//     }

//     // processing
//     int minIndex = j;
//     for (int i = j + 1; i < arr.size(); i++) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//     }

//     swap(arr[j], arr[minIndex]);

//     // recursive call
//     return selectionSort(arr, j + 1);
// }