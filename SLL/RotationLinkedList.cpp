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
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == NULL) return head;
//         if(head->next ==NULL) return head;

//         ListNode* t = head;
//         int a = 0;
//         while(t!=NULL) {t=t->next;a++;}
//         k = k%a;
//         if (k == 0) {
//             return head; // No rotation needed
//         }

//         ListNode* temp;
//         ListNode* headPtr;

//         for(int i=1;i<=k;i++){
//             temp = head;
//             while(temp->next->next != NULL) {temp = temp->next;}
//             headPtr = temp->next;
//             temp->next = NULL;
//             headPtr->next = head;
//             head = headPtr;
//         }

//         return head;
//     }
// };