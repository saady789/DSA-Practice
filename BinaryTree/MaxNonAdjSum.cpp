// class Solution{
//   public:
//     //Function to return the maximum sum of non-adjacent nodes.
//     pair<int,int> solve(Node *root,pair<int,int> p){
//         //2 base cases;
//         if(!root) { return make_pair(0,0); }
//         if(!root->left && !root->right) { return make_pair( root->data, 0); }
//         //processing + base case ;
//         pair<int,int> leftSide = solve(root->left,p);
//         pair<int,int> rightSide = solve(root->right,p);
//         return make_pair( leftSide.second+rightSide.second+root->data,max(leftSide.first, leftSide.second) + max(rightSide.first, rightSide.second));
//     }
//     int getMaxSum(Node *root) 
//     {
//         pair<int,int> ans = solve(root,make_pair(0,0));
//         return max(ans.first,ans.second);
//     }
// };