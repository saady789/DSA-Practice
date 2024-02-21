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

// 113. Path Sum II
// Solved
// Medium
// Topics
// Companies
// Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.

// A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

// class Solution {
// public:
//     void solve(TreeNode* root, vector<int> target,int targetSum, vector<vector<int>>& ans) {
//         // base case
//         if (!root) {
//             return;
//         };


//         // processing + base case
//         target.push_back(root->val);
//           if (!root->left && !root->right) {
//             int sum = accumulate(target.begin(), target.end(), 0);
//             if (sum == targetSum)
//                 ans.push_back(target);
//         }
//         solve(root->left, target,targetSum, ans);
//         solve(root->right, target,targetSum, ans);
//         target.pop_back();
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> ans;
//         solve(root, {},targetSum, ans);
//           return ans;
//         int sum;
//         for (int i = 0; i < ans.size(); i++) {
//             int sum = accumulate(ans[i].begin(), ans[i].end(), 0);
//             if (sum != targetSum) {
//                 ans.erase(ans.begin() + i); // Remove the path if its sum
//                                             // doesn't equal the target sum
//                 i--; // Decrement i to adjust for the erased element
//             }
//         }

//     }
// };