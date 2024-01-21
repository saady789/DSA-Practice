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
//     ListNode* swap(ListNode* head){
//         //basecase 
//         if(head == NULL || head->next == NULL) return head;

//         //processing + basecase;
//         ListNode* n = swap(head->next->next);
//         ListNode* temp = head->next;
//         head->next = n;
//         temp->next = head;
//         return temp;

//     }
//     ListNode* swapPairs(ListNode* head) {
//         if(head==NULL) return NULL;
//         if(head->next == NULL) return head;
//         head = swap(head);
//         return head;

//     }
// };