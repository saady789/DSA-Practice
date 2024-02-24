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
//     void solve(TreeNode* root,int target,int &level,int levelPtr,TreeNode* &sib,TreeNode* sibPtr,bool &found){
//         //base case
//         if(!root) return ;
//         //processing + recursive calls 
//         levelPtr++;
//         if(root->val == target){
//             level = levelPtr;
//             sib = sibPtr;

//         }
//         sibPtr = root;
//         solve(root->left,target,level,levelPtr,sib,sibPtr,found);
//         solve(root->right,target,level,levelPtr,sib,sibPtr,found);
//         levelPtr--;


//     }
//     bool isCousins(TreeNode* root, int x, int y) {
//         int levelX = 0;
//         int levelY = 0;
//         bool foundX = false;
//         bool foundY = false;
//         TreeNode* sibX = NULL;
//         TreeNode* sibY = NULL;
//         solve(root,x,levelX,0,sibX,root,foundX);
//         solve(root,y,levelY,0,sibY,root,foundY);

//         if(levelX != levelY) return false;
//         if(sibX->val == sibY->val) return false;

//         return true;


//     }
// };