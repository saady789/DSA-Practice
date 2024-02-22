// bool isSymmetric(TreeNode* root) {
//     if (!root->left && !root->right)
//         return true;
//     TreeNode* left = root->left;
//     TreeNode* right = root->right;
//     queue<TreeNode*> q1;
//     queue<TreeNode*> q2;

//     q1.push(left);
//     q2.push(right);
//     while (!q1.empty() && !q2.empty()) {
//         TreeNode* t1 = q1.front();
//         TreeNode* t2 = q2.front();
//         if(t1==NULL && t2==NULL) {q1.pop();q2.pop();continue;}
//         if( (t1==NULL && t2!=NULL) || (t2==NULL && t1!=NULL) ) return false;
//         if ( (t1&&t2)&& t1->val != t2->val)
//             return false;
//         q1.pop();
//         q2.pop();

//         q1.push(t1->right);
//         q1.push(t1->left);

//         q2.push(t2->left);
//         q2.push(t2->right);
//     }

//     return true;
// }