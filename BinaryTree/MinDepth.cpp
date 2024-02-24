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
//     void solve(TreeNode*root,int level,vector<int> &ans ){
//         //base case 
//         if(!root) { return; }
//         if(!root->left && !root->right) { ans.push_back(level);return; }
//         //processing + recursive calls 
//         solve(root->left,level+1,ans);
//         solve(root->right,level+1,ans);

//     }
//     int minDepth(TreeNode* root) {
//         if(!root) return 0;
//         if(!root->left && !root->right) return 1;
//         vector<int> ans;
//         solve(root,1,ans);
//         int min = INT_MAX;
//         for(int i=0;i<ans.size();i++){
//             if(ans[i]==1) continue;
//             if(ans[i] < min ) min = ans[i];
//         }
//         return min;
//     }

// };