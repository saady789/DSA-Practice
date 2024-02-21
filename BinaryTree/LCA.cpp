// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     void solve(TreeNode* root, vector<TreeNode*>& arr, TreeNode* target) {
//     if (!root)
//         return; // the base case

//     // Processing + recursive calls
//     arr.push_back(root);
//     if (root == target)
//         return; // Return if the target node is found

//     // Search in left and right subtrees
//     solve(root->left, arr, target);
//     solve(root->right, arr, target);

//     if (arr.back() != target)
//         arr.pop_back(); // Backtrack if the target node is not found in this subtree
// }

//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*> arr1;
//         vector<TreeNode*> arr2;

//         solve(root, arr1, p);
//         solve(root, arr2, q);
//         TreeNode* temp;
//         int len1 = arr1.size() - 1;
//         int len2 = arr2.size() - 1;
//         int ptr1 = 0;
//         int ptr2 = 0;
//         while (ptr1 <= len1 && ptr2 <= len2) {
//             if (arr1[ptr1]->val == arr2[ptr2]->val)
//                 temp = arr1[ptr1];
//             else
//                 break;
//             ptr1++;
//             ptr2++;
//         }
//         return temp;
//     }
// };