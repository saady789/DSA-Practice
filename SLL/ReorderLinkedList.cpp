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

//     ListNode* reorder(ListNode* head){
//         //basecase
//         if(head==NULL || head->next == NULL ) return head;
//         //processing + recursive calls 
//         ListNode* headPtr = head;
//         while(headPtr->next->next != NULL) {headPtr = headPtr->next;}
//         ListNode* temp = headPtr;
//         headPtr = headPtr->next;
//         temp->next = NULL;
//         ListNode* newhead = head->next;
//         head->next = headPtr;
//         headPtr->next = reorder(newhead);

//         return head;
//     }
//     void reorderList(ListNode* head) {
//         if(head->next == NULL) return ;
//         reorder(head);






//     }
// };