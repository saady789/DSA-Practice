#include <iostream>
#include <vector>
#include<queue>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

class node{
  public:
    int data;
    node* left;
    node* right;
    node(int d){data=d;left=NULL;right=NULL;}

};


int main() {
 node* r = NULL;
 r = buildLevelOrder(r);
 levelOrderTraversal(r);
 // cout<<"Inorder "<<endl;
 // inOrder(r);
 // cout<<"Preorder"<<endl;
 // preOrder(r);
 // cout<<"Postorder"<<endl;
 // postOrder(r);
 
}
