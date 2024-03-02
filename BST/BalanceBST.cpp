// class Solution {
// public:
//     TreeNode* buildBalancedBST(vector<TreeNode*>& arr, int start, int end) {
//         if (start > end) return nullptr;

//         int mid = start + (end - start) / 2;
//         TreeNode* root = arr[mid];

//         root->left = buildBalancedBST(arr, start, mid - 1);
//         root->right = buildBalancedBST(arr, mid + 1, end);

//         return root;
//     }

//     TreeNode* balanceBST(TreeNode* root) {
//         vector<TreeNode*> arr;
//         inorder(root, arr);

//         return buildBalancedBST(arr, 0, arr.size() - 1);
//     }

//     void inorder(TreeNode* root, vector<TreeNode*>& arr) {
//         if (!root) return;
//         inorder(root->left, arr);
//         arr.push_back(root);
//         inorder(root->right, arr);
//     }
// };
