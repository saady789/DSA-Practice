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
// 129. Sum Root to Leaf Numbers
// Solved
// Medium
// Topics
// Companies
// You are given the root of a binary tree containing digits from 0 to 9 only.

// Each root-to-leaf path in the tree represents a number.

// For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
// Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

// A leaf node is a node with no children.
// class Solution {
// public:
//     void solve(TreeNode* root,vector<int> temp,vector<vector<int>> &ans) {
//         //base case
//         if(!root) { return; }

//         //processing + recursive calls
//         temp.push_back(root->val);

//         if(!root->left && !root->right){ ans.push_back(temp);return; }

//         solve(root->left,temp,ans);
//         solve(root->right,temp,ans);
//         temp.pop_back();
//     }
//     int sumNumbers(TreeNode* root) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         solve(root,temp,ans);
//         int answer = 0;
//         for(int i=0;i<ans.size();i++){
//             reverse(ans[i].begin(),ans[i].end());
//         }

//          for(int i=0;i<ans.size();i++){
//              long factor = 1;
//              int sum = 0;
//             for(int j=0;j<ans[i].size();j++){
//                 sum += ans[i][j] * factor;
//                 factor = factor * 10;
//             }
//             answer += sum;
//         }

//         return answer;




//     }
// };