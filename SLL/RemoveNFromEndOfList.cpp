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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head->next == NULL && n==1) return NULL;
//         int x=0;
//         ListNode* headPtr = head;
//         while(headPtr != NULL){
//             x++;headPtr=headPtr->next;
//         }
//         if(x==n) return head=head->next;
//         headPtr = head;
//         while(x!=n){
//             x--;
//             if(x==n)break;
//             headPtr=headPtr->next;
//         }
//         headPtr->next = headPtr->next->next;
//         return head;

//     }
// };