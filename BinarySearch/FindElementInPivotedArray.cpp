// int search(vector<int>& arr, int k, int n)
// {



//  int mid;
//   int start = 0;
//   int end = arr.size()-1;
//   int ans = -1;
//   int pivot;
//   mid = start + (end-start)/2;

//   while(start<end){

//    if(arr[mid]<=arr[mid+1] && arr[mid]<=arr[mid-1]) {
//        pivot = mid;break;
//    }        

//     if(arr[mid]>=arr[0]){
//       start = mid+1;
//     }
//     else {
//       end = mid;
//     }
//       mid = start + (end-start)/2;
//     }
//   pivot = mid;
//   int s1 = 0;
//   int e1 = pivot-1;
//   int s2 = pivot;
//   int e2 = arr.size() - 1;
//   int flag = 0;
//   if(n>=arr[s1]&& n<=arr[e1]) { 
//       while(s1<=e1) {
//           mid = s1 + (e1-s1)/2;
//           if(arr[mid]==n) {flag=1;return mid;}
//           if(arr[mid]>=n) e1 = mid-1;
//           if(arr[mid]<n) s1 = mid+1;
//       }

//   }
//   else if(n>=arr[s2]&& n<=arr[e2]) { 
//       while(s2<=e2) {
//           mid = s2 + (e2-s2)/2;
//           if(arr[mid]==n) {flag=1;return mid;}
//           if(arr[mid]>=n) e2 = mid-1;
//           if(arr[mid]<n) s2 = mid+1;
//       }

//   }
//   if(flag==0) return -1;;



// }

