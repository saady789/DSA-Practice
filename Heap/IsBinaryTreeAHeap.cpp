// bool isComplete(Node* root ){
//     if(!root) return true;
//     queue<Node*> q;
//     q.push(root);
//     bool status = false;
//     while(!q.empty()){
//         int size = q.size();
//         for(int i=0;i<size;i++){
//             Node* t = q.front();
//             q.pop();
//             if(!t) status = true;
//             else {
//                 if(status) return false;
//                 q.push(t->left);
//                 q.push(t->right);
//             }

//         }
//     }
//     return true;
// }
// bool isMaxHeap(Node* root){
//     //base case 
//     if(!root) return true;
//     if(!root->left && !root->right) return true;
//     if(root->left && !root->right){
//         if(root->data > root->left->data) return true;
//         return false;
//     }
//     //processing + recursive calls
//     bool leftSide = isMaxHeap(root->left);
//     bool rightSide = isMaxHeap(root->right);
//     return ( (root->data > root->left->data && root->data > root->right->data) && leftSide && rightSide );


// }
// bool isHeap(struct Node* tree) {
//     if(isComplete(tree) && isMaxHeap(tree)) return true;
//     else return false;
// }