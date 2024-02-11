/**
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
//      vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> temp;
//         TreeNode* curr = root;
//         TreeNode* lastVisited = nullptr;  // To keep track of the last visited node

//         while (curr != NULL || !temp.empty()) {
//             while (curr != NULL) {
//                 temp.push(curr);
//                 curr = curr->left;
//             }

//             curr = temp.top();

//             // Check if the right subtree has been processed or not
//             if (curr->right == nullptr || curr->right == lastVisited) {
//                 temp.pop();
//                 ans.push_back(curr->val);
//                 lastVisited = curr;
//                 curr = nullptr;  // Move to the next node in the stack
//             } else {
//                 curr = curr->right;
//             }
//         }

//         return ans;
//     }
// };