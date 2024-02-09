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

node* buildTree(node* root){
  cout<<"Enter the data"<<endl;
  int data;
  cin>>data;
  if(data==-1) return NULL;
  root = new node(data);
  cout<<"Enter data for inserting in left of "<<data<<endl;
  root->left = buildTree(root->left);
  cout<<"Enter data for inserting in right of "<<data<<endl;
  root->right = buildTree(root->right);
  return root;
}

void levelOrderTraversal(node* root){
  queue<node*> q;
  q.push(root);
  while(!q.empty()){
    node* d = q.front();
    q.pop();
    cout<<d->data<<" ";
    if(d==NULL) q.push(NULL);
    if(d->left) q.push(d->left);
    if(d->right) q.push(d->right);
    
  }
  
}

node* buildLevelOrder(node* root){
  queue<node*> q;
  int x;
  cout<<"Enter the first node: ";
  cin>>x;
  root = new node(x);
  q.push(root);
  node* ptr = q.front();
  int n1;
  int n2;
  while(1){
    ptr = q.front();
    q.pop();
    cout<<"Enter element in left of "<<ptr->data<<endl;
    cin>>n1;
    if(n1==-1) break;
    node* no1 = new node(n1);
    q.push(no1);
    ptr->left = no1;
    
    cout<<"Enter element in right of "<<ptr->data<<endl;
    cin>>n2;
    if(n2==-1) break;
    node* no2 = new node(n2);
    q.push(no2);
    ptr->right = no2;
  }
  return root;
}

void inOrder(node* root){
  //base case
  if(root == NULL) return;
  //head recursive call + processing
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);

}

void preOrder(node* root){
  //base case
  if(root == NULL) return;
  //head recursive call + processing
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);

}
void postOrder(node* root){
  //base case
  if(root == NULL) return;
  //head recursive call + processing
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ";


}
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
