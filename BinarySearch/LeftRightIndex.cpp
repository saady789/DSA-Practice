// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//   int left=-1;
//   int right=-1;

//   int start = 0;
//   int end = arr.size() - 1;
//   int mid ;

//   //left occurrence 
//   while(start<=end){
//     mid = start + (end - start)/2;
//     if(arr[mid]==k){
//       end = mid-1;
//       left = mid;
//     }
//     if(arr[mid]>k){
//       end = mid - 1;
//     }
//     if(arr[mid]<k){
//       start = mid + 1;
//     }
//     }

//   start = 0;
//   end = arr.size() - 1;
//   //right occurrence 
//   while(start<=end){
//     mid = start + (end - start)/2;
//     if(arr[mid]==k){ right = mid;
//       start = mid+1;

//     }
//     if(arr[mid]>k){
//       end = mid - 1;
//     }
//     if(arr[mid]<k){
//       start = mid + 1;
//     }
//     }

//       return make_pair(left,right);
// }