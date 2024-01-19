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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* newHead = new ListNode(0);
//         ListNode* newHeadPtr = newHead;

//         while (list1 != NULL && list2 != NULL) {

//             if (list1 != NULL && list2 != NULL && list1->val == list2->val) {

//                 newHeadPtr->next = list1;
//                 list1 = list1->next;newHeadPtr = newHeadPtr->next;


//             }
//             if (list1 != NULL && list2 != NULL && list1->val > list2->val) {
//                 newHeadPtr->next = list2;
//                 list2 = list2->next;newHeadPtr = newHeadPtr->next;

//             }
//             if (list1 != NULL && list2 != NULL && list1->val < list2->val) {
//                 newHeadPtr->next = list1;
//                 list1 = list1->next;newHeadPtr = newHeadPtr->next;

//             }
//             if (list1 == NULL || list2 == NULL)
//                 break;
//         }
//         while (list1 != NULL) {
//             newHeadPtr->next = list1;
//             list1 = list1->next;newHeadPtr = newHeadPtr->next;

//         }
//         while (list2 != NULL) {
//             newHeadPtr->next = list2;
//             list2 = list2->next;newHeadPtr = newHeadPtr->next;

//         }

//         return newHead->next;
//     }
// };