// class Solution {
// public:
//     void solve(TreeNode* root, int &count,int targetSum,long current){
//         //base case 
//         if(!root) return;

//         //processing + base case;
//         current += root->val;
//         if(current == targetSum) count++;

//         solve(root->left,count,targetSum,current);
//         solve(root->right,count,targetSum,current);
//         current -= root->val;

//     }
//     int pathSum(TreeNode* root, int targetSum) {
//         if(!root) return 0;
//         int count = 0;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             solve(q.front(),count,targetSum,0);
//             TreeNode* temp = q.front();
//             q.pop();
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }
//         return count;
//     }
// };