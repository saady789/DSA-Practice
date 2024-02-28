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
//     void solve(TreeNode* root,string name,int &sum){
//         if(!root) return;
//         if( (!root->left && !root->right) && name=="left" ) { sum += root->val; return;}


//         solve(root->left,"left",sum);
//         solve(root->right,"right",sum);
//     }
//     int sumOfLeftLeaves(TreeNode* root) {
//         if(!root->left && !root->right) return 0;
//         int sum = 0;
//         solve(root,"root",sum);
//         return sum;
//     }
// };