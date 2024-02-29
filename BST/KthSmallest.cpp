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
//     void solve(TreeNode* root,int &k,int &answer) { 
//         //base case 
//         if(!root) NULL;
//         //processing + recursive calls 
//         if(root->left)solve(root->left,k,answer);
//         k--;
//         if(k==0) {answer = root->val; return;}
//         if(root->right)solve(root->right,k,answer);

//      }
//     int kthSmallest(TreeNode* root, int k) {
//         if(!root) return -1;
//         if(!root->left && !root->right) {
//             if(k==1) return root->val;
//             else return -1;
//         }
//         int answer = 0;
//         solve(root,k,answer);
//         return answer;
//     }
// };