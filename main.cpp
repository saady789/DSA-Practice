#include <iostream>
#include <vector>
#include<queue>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
public:
unordered_map<int,list<int>> mp;
void insertEdge(int n1,int n2,bool status){
  //status 0 for undirected and 1 for directed 
  mp[n1].push_back(n2);
  if(status) mp[n2].push_back(n1);
}
void printGraph(){
  for(auto it:mp){
    cout<<it.first<<" : ";
    for(int i:it.second) {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
};

int main() {
    Graph *g = new Graph();
    g->insertEdge(0,1,0);
    g->insertEdge(1,2,0);
    g->insertEdge(2,0,0);
    g->printGraph();
    return 0;
}

