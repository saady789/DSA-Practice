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
// ListNode* reverseList(ListNode* head) {
//     ListNode* prev = nullptr;
//     ListNode* current = head;
//     ListNode* nextNode = nullptr;

//     while (current != nullptr) {
//         nextNode = current->next;  // Save the next node
//         current->next = prev;      // Reverse the link
//         prev = current;            // Move prev to current
//         current = nextNode;        // Move current to the next node
//     }

//     return prev;  // The new head of the reversed list
// }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* newhead = new ListNode(1);
//         ListNode* newheadPtr = newhead;
//         l1 = reverseList(l1);
//         l2 = reverseList(l2);
//         int carry = 0;
//         ListNode* t1 = l1;
//         ListNode* t2 = l2;
//         int ans;
//         while(t1!=NULL && t2!=NULL){
//             ans = t1->val + t2->val + carry;
//             carry = ans/10;
//             ListNode* n = new ListNode(ans%10);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//             t1=t1->next;
//             t2=t2->next;
//             if(t1==NULL || t2==NULL) break; 

//         }
//         while(t1!=NULL){
//             ans = t1->val + carry;
//             carry = ans/10;
//              ListNode* n = new ListNode(ans%10);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//             t1=t1->next;
//         }

//         while(t2!=NULL){
//             ans = t2->val + carry;
//             carry = ans/10;
//              ListNode* n = new ListNode(ans%10);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//             t2=t2->next;
//         }
//         if(carry>0 && carry <10){
//             ListNode* n = new ListNode(carry);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//         }
//         if(carry>9){

//             ListNode* n = new ListNode(ans%10);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//             ListNode* n1 = new ListNode(ans%10);
//             newheadPtr->next = n1;
//             newheadPtr = newheadPtr->next;
//         }

//         newhead = newhead->next;
//         newhead = reverseList(newhead);

//         return newhead;


//     }
// };