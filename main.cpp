#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;



int main() {

  vector<int> a = {9,9};
  vector<int> b = {1,2,3};
  vector<int> result;
  int c = 0;
  int n = a.size()-1;
  int m = b.size()-1;
  int mod;
  int quot;
  while(n>=0 && m>=0){
    int temp = a[n] + b[m] + c;
    if(temp>9){
      mod = temp%10;
      quot = temp/10;
      c = quot;
      result.push_back(mod);
      
  }
    else {
      c=0;
      result.push_back(temp);
    }
    n--;m--;

}
  if(n>=0){
   while(n>=0){
     int temp = a[n] + c;
     if(temp>9){
       mod = temp%10;
       quot = temp/10;
       c = quot;
       result.push_back(mod);

     }
     else {
       c=0;
       result.push_back(temp);
     }
     n--;
   }
    
  }
  if(m>=0){

    while(m>=0){
       int temp = b[m] + c;
       if(temp>9){
         mod = temp%10;
         quot = temp/10;
         c = quot;
         result.push_back(mod);

       }
       else {
         c=0;
         result.push_back(temp);
       }
       m--;
  }
  }

  int start = 0;
  int end = result.size()-1;
  while(start<=end){
    int temp = result[start];
    result[start]=result[end];
    result[end]=temp;
    start++;end--;
  }

  for(int x:result){
    cout<<x<<" ";
  }
  cout<<endl;
  cout<<"Size "<<result.size();

  
    
}
  

 

  
   
