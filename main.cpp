#include <iostream>
#include <vector>
#include<queue>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

class Heap{
public:
vector<int> arr;
int size = 0;
Heap(){
  size = 0;
  arr[0] = -1;
}
void insert(int data){
  size++;
  int index = size;
  arr[index] = data;
  while(index>1){
    int parent = index/2;
    if(arr[parent]<arr[index]) { // max heap
      swap(arr[parent],arr[index]);
    }
    else return;
    index = index/2;
    
    
  }
  
}
void del (){
  if(size==0) {cout<<"Nothing to delete"<<endl;return; }
  swap(arr[0],arr[size]);
  arr.pop_back();
  size--;
  for(int i=1;i<size;i++){
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    if(leftIndex<size && arr[leftIndex] > arr[i]) {
      swap(arr[leftIndex],arr[i]);
    }
    else if (rightIndex<size && arr[rightIndex] > arr[i]) {
      swap(arr[rightIndex],arr[i]);
    }
    else { cout<<"Successfully Deleted"<<endl;return; }
  }
}
void print(){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

};

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;  // Initialize largest as root
    int left = 2 * i ;  // left = 2*i + 1
    int right = 2 * i + 1;  // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int> &arr){
    int size = arr.size();

    // Build max heap
    for (int i = size / 2 - 1; i >= 0; --i)
        heapify(arr, size, i);

    // Extract elements from heap one by one
    for (int i = size - 1; i > 0; --i) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {55, 53, 54, 52, 50}; // Index 0 should not be used in heap sort
    heapSort(arr);
    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}

