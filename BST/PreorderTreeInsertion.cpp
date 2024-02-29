// class Solution {
// public:
//     TreeNode* solve(TreeNode* root, int val) {
//         if (!root) {
//             root = new TreeNode(val);
//             return root;
//         }

//         if (val <= root->val) {
//             root->left = solve(root->left, val);
//         } else {
//             root->right = solve(root->right, val);
//         }
//         return root;
//     }

//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         if (preorder.empty()) return nullptr;
//         if(preorder.size()==1) { TreeNode* t = new TreeNode(preorder[0]);return t; }

//         TreeNode* root = new TreeNode(preorder[0]);
//         for (int i = 1; i < preorder.size(); ++i) {
//             solve(root, preorder[i]);
//         }
//         return root;
//     }
// };