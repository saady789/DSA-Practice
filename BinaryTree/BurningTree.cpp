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
//     TreeNode* solve(TreeNode* target, int val) {
//     if (!target) return NULL;

//     if (target->val == val) {
//         return target;
//     }

//     // Search in left subtree
//     TreeNode* foundLeft = solve(target->left, val);
//     if (foundLeft) return foundLeft; // If found in left subtree, return it

//     // Search in right subtree
//     TreeNode* foundRight = solve(target->right, val);
//     if (foundRight) return foundRight; // If found in right subtree, return it

//     // If not found in both subtrees, return NULL
//     return NULL;
// }


//     int amountOfTime(TreeNode* root, int start) {
//         if (!root) return -1;
//         TreeNode* first = solve(root,start);
//         int time = -1; // Initial burn time
//         map<TreeNode*, TreeNode*> mp; //<node,father>
//         map<TreeNode*, int> status; // Status map to mark visited nodes

//         queue<TreeNode*> q;
//         q.push(root);
//         mp[root] = NULL;

//         while (!q.empty()) {
//             int size = q.size();
//             for (int i = 0; i < size; i++) {
//                 TreeNode* temp = q.front();
//                 q.pop();
//                 if (temp->left) {
//                     mp[temp->left] = temp;
//                     q.push(temp->left);
//                 }
//                 if (temp->right) {
//                     mp[temp->right] = temp;
//                     q.push(temp->right);
//                 }
//             }
//         }

//         // calculateTime(first, time, mp, status);
//         q.push(first);
//         while(!q.empty()){
//             int size = q.size();
//             time++;
//             for(int i=0;i<size;i++){
//                 TreeNode* t = q.front();
//                 q.pop();
//                 status[t] = 1;
//                 if(t->left && status[t->left]!=1) q.push(t->left);
//                 if(t->right && status[t->right]!=1) q.push(t->right);
//                 if(mp[t] && status[ mp[t] ]!=1) q.push(mp[t]);
//             }
//         }
//         return time;
//     }
// };