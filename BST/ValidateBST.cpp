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
//     void solve(TreeNode* root,bool &status,long min,long max){
//         //base caes 
//         if(!root) return ;
//         //processing + recursive calls 
//         int val = root->val;
//         if( val > min && val < max) {
//         solve(root->left,status,min,val );
//         solve(root->right,status,val,max);
//         }
//         else {status = false;return;}

//         return ;


//     }
//     bool isValidBST(TreeNode* root) {
//         if(!root->left && !root->right) return true;
//         bool status = true;
//         solve(root,status,LONG_MIN,LONG_MAX);
//         return status;
//     }
// };