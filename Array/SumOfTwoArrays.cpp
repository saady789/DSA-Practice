// #include <bits/stdc++.h> 
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

//   vector<int> result;
//   int c = 0;

//   int mod;
//   int quot;
//   while(n>=0 && m>=0){
//     int temp = a[n] + b[m] + c;
//     if(temp>9){
//       mod = temp%10;
//       quot = temp/10;
//       c = quot;
//       result.push_back(mod);

//   }
//     else {
//       c=0;
//       result.push_back(temp);
//     }
//     n--;m--;

// }
//   if(n>=0){
//    while(n>=0){
//      int temp = a[n] + c;
//      if(temp>9){
//        mod = temp%10;
//        quot = temp/10;
//        c = quot;
//        result.push_back(mod);

//      }
//      else {
//        c=0;
//        result.push_back(temp);
//      }
//      n--;
//    }

//   }
//   if(m>=0){

//     while(m>=0){
//        int temp = b[m] + c;
//        if(temp>9){
//          mod = temp%10;
//          quot = temp/10;
//          c = quot;
//          result.push_back(mod);

//        }
//        else {
//          c=0;
//          result.push_back(temp);
//        }
//        m--;
//   }
//   }

//   int start = 0;
//   int end = result.size()-1;
//   while(start<=end){
//     int temp = result[start];
//     result[start]=result[end];
//     result[end]=temp;
//     start++;end--;
//   }

//   return result;
// }