// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution {
// public:

//     TreeNode* reverseOddLevels(TreeNode* root) {
//         if (!root)
//             return root;
//         if (!root->left && !root->right)
//             return root;
//         vector<vector<TreeNode*>> ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()) {
//             vector<TreeNode*> temp;
//             int size = q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode* t = q.front();
//                 q.pop();
//                 temp.push_back(t);
//                 if(t->left) q.push(t->left);
//                 if(t->right) q.push(t->right);
//             }
//             ans.push_back(temp);
//         }
//         for(int i=0;i<ans.size();i++){
//             if(i%2==0) continue;
//             int start = 0;
//             int end = ans[i].size()-1;
//             while(start<=end){
//                 int te = ans[i][start]->val;
//                 ans[i][start]->val = ans[i][end]->val;
//                 ans[i][end]->val = te;
//                 start++;end--;
//             } 
//         }
//         return root;

//     }
// };