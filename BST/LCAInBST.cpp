// TreeNode* LCAinaBST(TreeNode* root, TreeNode* P, TreeNode* Q) {
//     // Base case: if root is null, or if P or Q are null, return null
//     if (!root || !P || !Q) return nullptr;

//     // If both P and Q are smaller than root, LCA must be in the left subtree
//     if (root->data > P->data && root->data > Q->data)
//         return LCAinaBST(root->left, P, Q);

//     // If both P and Q are greater than root, LCA must be in the right subtree
//     if (root->data < P->data && root->data < Q->data)
//         return LCAinaBST(root->right, P, Q);

//     // If one node is in the left subtree and the other is in the right subtree,
//     // or if root is equal to one of the nodes P or Q, then root is the LCA
//     return root;
// }