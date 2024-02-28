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
//      TreeNode* solve(vector<int>& postorder, vector<int>& inorder) {
//         // base case
//         if (postorder.empty() || inorder.empty())
//             return nullptr;

//         if (inorder.size() == 1) {
//             TreeNode* p = new TreeNode(inorder[0]);
//             return p;
//         }

//         // processing + recursive calls
//         TreeNode* root = new TreeNode(postorder[postorder.size()-1]);
//         postorder.pop_back();
//         int i = 0;
//         for (i = 0; i < inorder.size(); i++) {
//             if (inorder[i] == root->val)
//                 break;
//         }

//         vector<int> leftInorder(inorder.begin(), inorder.begin() + i);
//         vector<int> rightInorder(inorder.begin() + i + 1, inorder.end());

//         vector<int> leftPostorder(postorder.begin() , postorder.begin() + leftInorder.size());
//         vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());

//         root->left = solve(leftPostorder, leftInorder);
//         root->right = solve(rightPostorder, rightInorder);

//         return root;
//     }
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

//         return solve(postorder,inorder);
//     }
// };