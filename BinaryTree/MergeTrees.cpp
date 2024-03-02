// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void solve(TreeNode* &root1,TreeNode* &root2) {
//         // base case
//         if(!root1 && !root2) return ;
//         //processing + recursive calls
//         if(!root1->left && root2->left) {
//             root1->left = new TreeNode(0);
//         }
//         if(root1->left && !root2->left) {
//             root2->left = new TreeNode(0);
//         }
//         if(!root1->right && root2->right) {
//             root1->right = new TreeNode(0);
//         }
//         if(root1->right && !root2->right) {
//             root2->right = new TreeNode(0);
//         }
//         if(root1->left && root2->left) {
//             solve(root1->left,root2->left);

//         }
//         if(root1->right&&root2->right){
//              solve(root1->right,root2->right);
//         }

//     }
//     void merge(TreeNode* &root1,TreeNode* &root2){
//         if(!root1 && !root2) return ;
//         root1->val = root1->val + root2->val;
//         merge(root1->left,root2->left);
//         merge(root1->right,root2->right);
//     }
//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//         if(!root1 && !root2) return NULL;
//         if(root1 && !root2) {
//             return root1;
//         }
//         if(!root1 && root2){
//             return root2;
//         }
//         if( (!root1->left && !root1->right) && (!root2->left && !root2->right)) {
//             root1->val += root2->val;
//             return root1;  
//         }
//         solve(root1,root2);
//         merge(root1,root2);
//         return root1;

//     }
// };