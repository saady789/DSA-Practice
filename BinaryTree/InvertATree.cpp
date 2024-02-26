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
//     TreeNode* solve(TreeNode* &root){
//         //base case 
//         if(!root->left && !root->right){
//             return root;
//         }
//         //processing + recursive calls 
//         TreeNode* left ;
//         TreeNode* right;
//         if(root->left) left = solve(root->left);
//         if(root->right) right = solve(root->right);
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//         return root;
//     }
//     TreeNode* invertTree(TreeNode* root) {
//         if(!root) return root;
//         if(!root->left && !root->right) return root;
//         TreeNode* ans = solve(root);
//         return ans;

//     } 
// };