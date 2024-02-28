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
//     void solve(TreeNode* root, vector<TreeNode* > &nodes){
//         if(!root) {return;}
//         nodes.push_back(root);
//         solve(root->left,nodes);
//         solve(root->right,nodes);

//     }
//     void flatten(TreeNode* root) {
//         if(!root || (!root->left&&!root->right) ) return;
//         vector<TreeNode* > nodes;
//         solve(root,nodes);
//         for(int i=0;i<nodes.size()-1;i++){
//             nodes[i]->left = NULL;
//             nodes[i]->right = nodes[i+1];
//         }

//     }
// };