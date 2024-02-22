//return binary tree level with max sum
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
//     int maxLevelSum(TreeNode* root) {
//         if(!root->left && !root->right) return root->val;
//         queue<TreeNode*> q;
//         q.push(root);
//         int level = 1;
//         int levelPtr = 1;
//         int ans = root->val;

//         while(!q.empty()) {
//              levelPtr++;
//             int size = q.size();
//             int sum = 0;
//             for(int i=0;i<size;i++){
//                 sum += q.front()->val;
//                 TreeNode* temp = q.front();
//                 q.pop();
//                 if(temp->left) q.push(temp->left);
//                 if(temp->right) q.push(temp->right);

//             }
//             if(sum>ans) { level=levelPtr;ans=sum; }

//         }
//         if(level == 1) return level;
//         return level-1;
//     }
// };