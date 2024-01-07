// bool isPossible(int mid,vector<int> time,int days,int chaps){

//   int daysPtr = 1;
//   int sum = 0;
//   for(int i=0;i<time.size();i++){
//     if(sum + time[i] <= mid){
//       sum += time[i];
//     }
//     else {
//       daysPtr++;
//       if(daysPtr > days || time[i] > mid){return false;}
//       sum = time[i];
//     }}


//   return true;


// }



// int findLargestMinDistance(vector<int> &time, int n)
// {
//    int s = 0;
//   int e = 0;
//    int ans=-1;
//   for(int x:time) {
//     e += x;
//   }
//   int mid = s + (e-s)/2;
//   while(s<=e){
//     mid = s + (e-s)/2;
//     if(isPossible(mid,time,n,time.size())) {
//       ans = mid;
//       e = mid - 1;
//     }
//     else {
//       s = mid+1;
//     }
//     }
//   return ans;
// }