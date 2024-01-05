// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {

//   int start = 0;
//   int end = arr.size()-1;
//   int mid;
//   while(start<=end){
//     mid = start + (end-start)/2;
//     if(  (arr[mid] > arr[mid+1])&&(arr[mid] >= arr[mid-1]) )
//     { break;}
//     if(arr[mid+1]>arr[mid]) {start = mid+1;}
//     if(arr[mid+1]<arr[mid]){end = mid-1;}

//   }
//   return mid;







//     }
// };