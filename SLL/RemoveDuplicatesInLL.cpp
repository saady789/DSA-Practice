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
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL) return head;
//         if(head->next==NULL) return head;
//         ListNode* curr = head;
//         ListNode* temp = NULL;
//         while(curr->next != NULL){
//             if(curr->next == NULL) break;
//             if(curr->val == curr->next->val){
//                 temp = curr->next;
//                 curr->next = curr->next->next;
//                 delete temp;
//             }
//             else{
//                 curr=curr->next;
//             }
//         }
//         return head;
//     }
// };