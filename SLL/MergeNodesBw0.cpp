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
// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* newHead = new ListNode(0);
//         ListNode* newHeadPtr = newHead;
//         ListNode* temp = head->next;
//         int sum=0;
//         while(temp!=NULL){
//             if(temp->val!=0){
//                 sum+=temp->val;
//                 temp=temp->next;
//             }
//             else {
//                 ListNode* newL = new ListNode(sum);
//                 sum=0;
//                 newHeadPtr->next = newL;
//                 newHeadPtr=newHeadPtr->next;
//                 temp=temp->next;

//             }
//         }

//         return newHead->next;

//     }
// };