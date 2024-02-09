/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int depth(TreeNode* root,int c){
//         if(root == NULL) return c-1;

//         int n1 = depth(root->left,c+1);
//         int n2 = depth(root->right,c+1);
//         return max(n1,n2);
//     }
//     int maxDepth(TreeNode* root) {
//         if(root==NULL) return 0;
//         return depth(root,1);
//     }
// };