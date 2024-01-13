#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

int main() {
   // sort(s1.begin(),s1.end());
   string s1 = "ab";
   string s2 = "eidboaoo";
   sort(s2.begin(),s2.end());
   sort(s1.begin(),s1.end());

   int res = s2.find(s1);
   if(res==-1) cout<<"False";
   else cout<<"True";
    
    
    
    
   
}
