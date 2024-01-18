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
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // base case
//         ListNode *test = head;

//         if (test == NULL)
//             return head;
//         for (int i = 1; i <k; i++) {
//             if (test->next == NULL || test == NULL)
//                 return head;
//             test = test->next;
//         }

//         // processing + recursive calls
//         ListNode* current = head;
//         ListNode* nextNode = NULL;
//         ListNode* prev = NULL;
//         for (int i = 1; i <= k; i++) {
//             // problem lies here when i do for last k
//             if (current != NULL) {
//                 nextNode = current->next;
//                 current->next = prev;
//                 prev = current;
//                 current = nextNode;
//             }
//         }

//         head->next = reverseKGroup(current, k);
//         return prev;
//     }
// };