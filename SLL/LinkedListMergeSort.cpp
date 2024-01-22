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
//     ListNode* mergeList(ListNode* list1, ListNode* list2) {
//         ListNode* ptr1 = list1;
//         ListNode* ptr2 = list2;
//         ListNode* newhead = new ListNode(0);
//         ListNode* newheadPtr = newhead;
//          while (ptr1 != NULL && ptr2 != NULL) {
//             if (ptr1->val > ptr2->val) {
//                 newheadPtr->next = ptr2;
//                 ptr2 = ptr2->next;
//                 newheadPtr = newheadPtr->next;
//             } else {
//                 newheadPtr->next = ptr1;
//                 ptr1 = ptr1->next;
//                 newheadPtr = newheadPtr->next;
//             }
//         }
//         while (ptr1 != NULL) {
//             newheadPtr->next = ptr1;
//             ptr1 = ptr1->next;
//             newheadPtr = newheadPtr->next;
//         }
//         while (ptr2 != NULL) {
//             newheadPtr->next = ptr2;
//             ptr2 = ptr2->next;
//             newheadPtr = newheadPtr->next;
//         }
//         return newhead->next;
//     }
//     void mergeSort(ListNode* &head) {
//         // basecase
//         if (head->next == NULL)
//             return ;

//         // processing + base case
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast->next !=NULL &&fast->next->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* list1 = head;
//         ListNode* list2 = slow->next;
//         slow->next = NULL;

//         mergeSort(list1);
//         mergeSort(list2);

//         head = mergeList(list1, list2);
//     }
//     ListNode* sortList(ListNode* head) {
//         if (head == NULL)
//             return NULL;
//         if (head->next == NULL)
//             return head;
//         mergeSort(head);
//         return head;
//     }
// };