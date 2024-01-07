#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

bool isPossible(int mid,vector<int> time,int days,int chaps){

  int daysPtr = 1;
  int sum = 0;
  for(int i=0;i<time.size();i++){
    if(sum + time[i] <= mid){
      sum += time[i];
    }
    else {
      daysPtr++;
      if(daysPtr > days || time[i] > mid){return false;}
      sum = time[i];
    }}


  return true;


}


int main() {
  int n = 4;
  vector<int> time = {2,2,3,3,4,4,1 };
  int s = 0;
  int e = 0;
  int ans=-1;
  for(int x:time) {
    e += x;
  }
  int mid = s + (e-s)/2;
  while(s<=e){
    mid = s + (e-s)/2;
    cout<<"Start:"<<s<<" End:"<<e<<" Mid:"<<mid<<endl;
    if(isPossible(mid,time,n,time.size())) {
      ans = mid;
      cout<<"Answer found "<<ans<<endl;
      e = mid - 1;
    }
    else {
      cout<<"Not a solution"<<endl;
      s = mid+1;
    }
    cout<<"-----Next Iteration----"<<endl;
    }
  cout<<ans;
  return 0;
}
    
  
  

 

  
   
