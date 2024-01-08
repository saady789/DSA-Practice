// #include<iostream>
// #include<vector>

// using namespace std;

// int main() {

//   vector<int> num1 = {0,0,3};
//   vector<int> num2 = {-1,1,1,1,2,3};
//   int m = num1.size();
//   int n = num2.size();
//   vector<int> arr (m+n,0);
//   int ptr1 = 0;
//   int ptr2 = 0;
//   int ptr = 0;
//   while(ptr1<m && ptr2<n){
//     if(num1[ptr1] == num2[ptr2]){
//       arr[ptr] = num1[ptr1];
//       ptr++;ptr1++;
//       arr[ptr] = num2[ptr2];
//       ptr++;ptr2++;
      
//     }
//     if(num1[ptr1] < num2[ptr2]){
//       arr[ptr] = num1[ptr1];
//       ptr++;ptr1++;
//     }
//     if(num1[ptr1] > num2[ptr2]){
//       arr[ptr] = num2[ptr2];
//       ptr++;ptr2++;
//     }
//   }

//   if(ptr1<m){
//     for(int i = ptr1; i<m; i++){
//       arr[ptr] = num1[i];ptr++;
//     }
//   }
//   if(ptr2<n){
//     for(int i = ptr2; i<n; i++){
//       arr[ptr] = num2[i];ptr++;
//     }
//   }

//   for(int i:arr) {
//     cout<<i<<" ";
//   }
  
  
  
// }