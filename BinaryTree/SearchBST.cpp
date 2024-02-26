// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         //base case 
//         if(!root) return NULL;
//         //processing + recursive calls 
//         if(root->val == val) return root;
//         if(root->val > val) return searchBST(root->left,val);
//         else return searchBST(root->right,val);


//     }
// };