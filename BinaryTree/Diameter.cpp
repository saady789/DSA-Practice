//<diameter,height>

// class Solution {
// public:
//     pair<int,int> diameter(TreeNode* root) { 
//         //base case
//         if(root==NULL) {
//             pair<int,int> p = make_pair(0,0);
//             return p;
//         }

//         //processing + recursive calls
//         pair<int,int> left = diameter(root->left);
//         pair<int,int> right = diameter(root->right);

//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second;

//         pair<int,int> answer;
//         answer.first = max( op1, max(op2,op3) ) ;
//         answer.second = max( left.second,right.second ) +1;
//         return answer;


//     }
//     int diameterOfBinaryTree(TreeNode* root) {

//         pair<int,int> x = diameter(root);
//         return x.first;
//     }
// };