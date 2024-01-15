#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

void merge(vector<int>&arr,int start,int end){
 vector<int> a;
 vector<int> b;
 int n = start;
 int mid = start + (end - start)/2;
  for(int i=start;i<=mid;i++){a.push_back((arr[i]));}
  for(int i=mid+1;i<=end;i++){b.push_back((arr[i]));}
  int ptr1=0;
  int ptr2=0;
  while(ptr1<a.size() && ptr2<b.size()) {
    if(a[ptr1]<b[ptr2]) {
      arr[n++] = a[ptr1++];
    }
    else arr[n++] = b[ptr2++];
    
  }
  while(ptr1<a.size()){
    arr[n++] = a[ptr1++];

  }
  while(ptr2<b.size()){
    arr[n++] = b[ptr2++];
  }
  
  
}

void mergeSort(vector<int>&arr,int start,int end){
  //basecase
  if(start>=end) return;

  int mid = start + (end - start)/2;

  //recursive call
  mergeSort(arr,start,mid);
  mergeSort(arr,mid+1,end);

  merge(arr,start,end);
  
}

int main() {
  vector<int> arr = {3,4,2,5,2};
  mergeSort(arr,0,arr.size()-1);
  for(int i:arr) {cout<<i<<" ";}
 


  
    
    
    
    
   
}
