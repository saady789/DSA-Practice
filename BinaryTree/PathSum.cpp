/**
this code checks if any branch of nodes sum to a target number or not
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
// class Solution {
// public:
//    bool solve(TreeNode* root,int targetSum) {
//         // basecase

//         if(root==NULL) return false;

//         // processing + recursive calls;
//         if (root->left == nullptr && root->right == nullptr && root->val == targetSum)
//             return true;

//         return solve(root->left, targetSum - root->val) ||
//                solve(root->right, targetSum - root->val);
//     }
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         if(root==NULL) return false;
//         return solve(root,targetSum);
//     }
// };