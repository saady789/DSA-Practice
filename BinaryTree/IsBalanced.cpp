// class Solution {
// public:
//     tuple<int,int,int> solve(TreeNode* root){
//         // Base case
//         if (root == nullptr) {
//             tuple<int,int,int> p = make_tuple(0,0,0);
//             return p;
//         }

//         // Processing + recursive call
//         tuple<int,int,int> p1 = solve(root->left);
//         tuple<int,int,int> p2 = solve(root->right);
//         tuple<int,int,int> ans;

//         int first = max(get<0>(p1), get<0>(p2)) + 1;
//         int second = abs(get<0>(p1) - get<0>(p2));
//         int third;
//         if( get<2>(p1) == 1 || get<2>(p2) ==1)  third=1;
//         else third = (second > 1) ? 1 : 0; 

//         return make_tuple(first, second, third);
//     }

//     bool isBalanced(TreeNode* root) {
//         tuple<int,int,int> p = solve(root);
//         return !get<2>(p); // Return negation of the third element
//     }
// };
