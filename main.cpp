#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

int main() {
    string s = "saad";
    sort(s.begin(),s.end());
    int start = 0;
  
    char t = 'a';
    int max = INT_MIN;
    for(int i=1;i<s.length();i++){
      if(s[i]==t){
        
      }
      else{
        if(i-start>max){
          max = i-start;
          t = s[i];
        }
        start=i;
        
      }
    }

  cout<<"Char is "<<t<<" and the max is "<<max;
    
    
   
}
