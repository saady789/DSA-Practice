// class Solution {
// public:
//     void left(Node* root, vector<int>& arr) {
//         if (root == nullptr || (root->left == nullptr && root->right == nullptr))
//             return;

//         arr.push_back(root->data);
//         if (root->left)
//             left(root->left, arr);
//         else
//             left(root->right, arr);
//     }

//     void right(Node* root, vector<int>& arr) {
//         if (root == nullptr || (root->left == nullptr && root->right == nullptr))
//             return;

//         if (root->right)
//             right(root->right, arr);
//         else
//             right(root->left, arr);
//         arr.push_back(root->data); // Add the node after traversal
//     }

//     void leaves(Node* root, vector<int>& arr) {
//         if (root == nullptr)
//             return;

//         if (root->left == nullptr && root->right == nullptr)
//             arr.push_back(root->data);

//         leaves(root->left, arr);
//         leaves(root->right, arr);
//     }

//     vector<int> boundary(Node* root) {
//         vector<int> ans;
//         if(root->right==NULL && root->left==NULL) {
//             ans.push_back(root->data);return ans;
//         }

//         if (root != nullptr) {
//             ans.push_back(root->data); // Add root node only once
//             left(root->left, ans);
//             leaves(root, ans);
//             if (root->right) // Ensure right child exists before traversing
//                 right(root->right, ans);
//         }

//         return ans;
//     }
// };