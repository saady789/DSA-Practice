// #include <iostream>
// #include <vector>
// #include <limits.h>
// #include <string>
// #include <algorithm>  // Add this line for transform
// using namespace std;

// int quick(vector<int> &arr,int start,int end){
//   int pivot = arr[start];
//   int count = 0;
//    for(int i=start+1;i<=end;i++){
//      if(arr[i]<pivot) count++;
//    }
//    int pivotIndex = start+count;
//    swap(arr[pivotIndex],arr[start]);
//    int s = start;
//    int e = end;
//    while(s<pivotIndex && e>pivotIndex){
//      while(arr[s]<arr[pivotIndex]) {s++;}
//      while(arr[e]>arr[pivotIndex]) {e--;}
//      if(s<pivotIndex && e>pivotIndex) {
//        swap(arr[s],arr[e]);s++;e--;
//      }
//    }
//   return pivotIndex;
// }


// void quickSort(vector<int> &arr,int start,int end){
//   //base case
//   if(start>end) return ;

//   //processing 
//   int pivot = quick(arr,start,end);

//   //recursive call
//   quickSort(arr,start,pivot-1);
//   quickSort(arr,pivot+1,end);

// }

// int main() {
//   vector<int> arr = {3,4,2,5,2};
//   quickSort(arr,0,arr.size()-1);
//   for(int i:arr) {cout<<i<<" ";}

// }
