// class Solution {
// public:
//     TreeNode* solve(vector<int>& preorder, vector<int>& inorder) {
//         // base case
//         if (preorder.empty() || inorder.empty())
//             return nullptr;

//         if (inorder.size() == 1) {
//             TreeNode* p = new TreeNode(inorder[0]);
//             return p;
//         }

//         // processing + recursive calls
//         TreeNode* root = new TreeNode(preorder[0]);
//         int i = 0;
//         for (i = 0; i < inorder.size(); i++) {
//             if (inorder[i] == root->val)
//                 break;
//         }

//         vector<int> leftInorder(inorder.begin(), inorder.begin() + i);
//         vector<int> rightInorder(inorder.begin() + i + 1, inorder.end());

//         vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + 1 + leftInorder.size());
//         vector<int> rightPreorder(preorder.begin() + 1 + leftInorder.size(), preorder.end());

//         root->left = solve(leftPreorder, leftInorder);
//         root->right = solve(rightPreorder, rightInorder);

//         return root;
//     }

//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         return solve(preorder, inorder);
//     }
// };
