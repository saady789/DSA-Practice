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
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* small = new ListNode(0);
//         ListNode* greater = new ListNode(0);
//         ListNode* smPtr = small;
//         ListNode* grPtr = greater;
//         while(head!=NULL){
//             if(head->val <x){
//                 smPtr->next = head;
//                 smPtr = smPtr->next;
//             }
//             else {
//                   grPtr->next = head;
//                   grPtr = grPtr->next;
//             }
//             head = head->next;
//         }
//         smPtr->next = greater->next;
//         grPtr->next = NULL;
//         small = small->next;

//         return small;
//     }
// };