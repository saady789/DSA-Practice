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
//     ListNode* oddEvenList(ListNode* head) {
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode* even = head->next;
//         ListNode* odd = head;
//         ListNode* headPtr = head;
//         ListNode* temp;
//         int i = 0;
//         while (headPtr != NULL) {
//             headPtr = headPtr->next;
//             ++i;
//         }
//         headPtr = head;

//         if (i % 2 == 0) {
//             while (headPtr->next->next != NULL) {
//                 temp = headPtr->next;
//                 headPtr->next = headPtr->next->next;
//                 headPtr = temp;
//             }
//         } else {
//             while (headPtr->next != NULL) {
//                 temp = headPtr->next;
//                 headPtr->next = headPtr->next->next;
//                 headPtr = temp;
//             }
//         }

//         if (headPtr != NULL) {
//             headPtr->next = even;
//         } else
//             headPtr = even;
//         return head;
//     }
// };