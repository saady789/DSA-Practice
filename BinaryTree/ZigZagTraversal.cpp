// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        if(root==NULL) {
//            vector<vector<int>> p;
//            return p;
//        }
//        if(root->left==NULL && root->right==NULL) {
//            vector<vector<int>> q;
//            q.push_back( {root->val} );
//            return q;
//        }
//        queue<TreeNode*> target;
//        queue<TreeNode*> temp;
//        stack<TreeNode*> st;
//        target.push( root );
//        temp.push(root);
//        bool lfr = true;
//        vector<vector<int>> ans;

//        while(!target.empty()){
//            while(!st.empty()){st.pop();}
//            while(!temp.empty()) {temp.pop();}
//            vector<int> arr;

//            while(!target.empty()) {
//                if(target.front()) {
//                arr.push_back(target.front()->val);

//                st.push(target.front());}
//                target.pop();
//            }
//            ans.push_back(arr);
//            while(!st.empty()) { temp.push(st.top());st.pop(); }

//            while(!temp.empty() ){
//                if(lfr){
//                    target.push( temp.front()->right );
//                    target.push( temp.front()->left);
//                }
//                else{
//                    target.push( temp.front()->left );
//                    target.push( temp.front()->right);
//                }
//                temp.pop();

//            }

//            if(lfr) lfr=false;
//            else lfr=true;
//        }
//        ans.pop_back();
//        return ans;

//     }
// };