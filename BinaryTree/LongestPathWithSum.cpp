// //pair<int,int> sum,level
// void solve(Node* root,pair<int,int>&answer,pair<int,int>temp){
//     if(root==NULL) return ; //basecase

//     //processing + recursive calls
//     temp.first += root->data;
//     temp.second++;
//      if (root->left == nullptr && root->right == nullptr) {
//     // Update answer pair if the current path is longer
//     if (temp.second > answer.second || (temp.second == answer.second && temp.first > answer.first)) {
//         answer = temp;
//     }
// }
//     solve(root->left,answer,temp);
//     solve(root->right,answer,temp);

// }
// int sumOfLongRootToLeafPath(Node *root)
// {
//     pair<int, int> answer(0,0);
//     pair<int, int> temp(0,0);

//     solve(root,answer,temp);

//     return answer.first;
// }