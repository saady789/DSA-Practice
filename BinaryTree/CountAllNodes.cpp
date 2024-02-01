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

//     int countNodes(TreeNode* root) {
//         int count = 0;
//         TreeNode* curr = root;
//         stack<TreeNode*> temp;
//         while(curr!= NULL || !temp.empty()){
//             while( curr!=NULL ) { temp.push(curr);curr = curr->left; }
//             curr = temp.top();
//             curr = curr->right;
//             temp.pop();
//             count++;

//         }
//         return count;
//     }
// };