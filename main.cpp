#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

void solve(string str,vector<string> &answer,string output,int index){
  //base case
  if (index > str.size() - 1) {
    if (!output.empty()) {  
      answer.push_back(output);
    }
    return;
  }


  //recursive call
  solve(str,answer,output,index+1);
  output.push_back(str[index]);
  solve(str,answer,output,index+1);


}

int main() {
  string str = "abc";
  vector<string> answer;
  

  string output;
  solve(str,answer,output,0);

  for(string i:answer) {
    cout<<"1: "<<i<<endl;
  }


}
