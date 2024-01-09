#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;
int main () {
  vector<int> prices = {7,1,5,3,6,4};
  int maxi = INT_MIN;
  int sell = 1;
  for(int i=0;i<sell;i++){
      if(prices[sell]-prices[i]>maxi) {
          maxi = prices[sell]-prices[i];
        cout<<"Maxi is now "<<maxi<<endl;
      }
      sell++;i=0;
      if(sell==prices.size()) break;
  }
  cout<<endl<<maxi;

  
}