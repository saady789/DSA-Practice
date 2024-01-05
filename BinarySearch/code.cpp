// #include <iostream>
// #include <vector>



// mid = start + end / 2
// instead do 
//  s + (e-s)/2
//time complexity is log(n)


// using namespace std;
// int main(){

//   vector<int> arr = {1,3,5,6,19,21};
//   int start = 0;
//   int x = 21;
//   int end = arr.size() - 1;
//   int mid ;
//   while(start<=end){
//     mid = (start+end)/2;
//     if(arr[mid] == x){cout<<"The index is "<<mid;  break;return 0;}
//     if(x>arr[mid]){
//       start = mid + 1;continue;
//     }  

//     if(x<=arr[mid]){
//       end = mid - 1;continue;  
//     }
//   }
//   cout<<"Element not found";     


// }