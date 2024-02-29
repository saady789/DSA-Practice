// class Solution {
// public:
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return helper(nums, 0, nums.size() - 1);
//     }

//     TreeNode* helper(vector<int>& nums, int left, int right) {
//         if (left > right) return nullptr; // Base case: empty subtree

//         int mid = left + (right - left) / 2; // Find the middle element
//         TreeNode* root = new TreeNode(nums[mid]); // Create new node with middle element

//         // Recursively construct left and right subtrees
//         root->left = helper(nums, left, mid - 1);
//         root->right = helper(nums, mid + 1, right);

//         return root;
//     }
// };