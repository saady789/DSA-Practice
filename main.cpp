#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

void phone(string digits,string output,vector<string> &answer,vector<string> data,int index){
  //basecase
  if(index==digits.length()) {
    answer.push_back(output);return;
  }

  //processing + recursive calls
  int d = digits[index] - '0';
  if(d==7||d==9) {
    output.push_back(data[d][0]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
    output.push_back(data[d][1]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
    output.push_back(data[d][2]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
    output.push_back(data[d][3]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
   
  }
  else {
    output.push_back(data[d][0]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
    output.push_back(data[d][1]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
    output.push_back(data[d][2]);
    phone(digits,output,answer,data,index+1);
    output.pop_back();
  }
  
  
}

int main() {
  string digits = "23";
  string output;
  vector<string> answer;
  vector<string> data ={"a","b","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  phone(digits,output,answer,data,0);
  for(string i:answer){
    cout<<i<<endl;
  }

  

 


}
