// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
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
//     TreeNode* buildTree(vector<TreeNode*> arr,int start,int end){
//         //base case 
//         if(start > end ) return NULL;
//         //processing + recursive calls 
//         int mid = start + (end-start)/2;
//         TreeNode* t = arr[mid];

//         t->left = buildTree(arr,start,mid-1);
//         t->right = buildTree(arr,mid+1,end);
//         return t;


//     }
//     TreeNode* sortedListToBST(ListNode* head) {
//         if(!head) return NULL;
//         vector<TreeNode*> arr;
//         ListNode* temp = head;
//         while(temp!=NULL) {
//             TreeNode* t = new TreeNode(temp->val);
//             arr.push_back(t);
//             temp = temp->next;
//         }
//         TreeNode* ans = buildTree(arr,0,arr.size()-1);
//         return ans;
//     }
// };