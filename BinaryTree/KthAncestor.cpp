
// Node* solve(Node*root,int &k,int node ) {
//     //base case 
//     if(!root) return NULL;
//     if(root->data==node) return root;
//     //processing + recursive calls 
//     Node* leftAns = solve(root->left,k,node);
//     Node* rightAns = solve(root->right,k,node);
//     if(leftAns!=NULL && rightAns==NULL) {
//         k--;
//         if(k<=0) { k=INT_MAX;return root; }
//         return leftAns;
//     }
//     if(rightAns!=NULL && leftAns==NULL) {
//          k--;
//         if(k<=0) { k=INT_MAX;return root; }
//         return rightAns;
//     }
//     return NULL;
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     if(!root->left && !root->right && k==1) return -1 ;
//     Node* answer = solve(root,k,node);
//     if(answer==NULL || answer->data == node) return -1;
//     else return answer->data;

// }