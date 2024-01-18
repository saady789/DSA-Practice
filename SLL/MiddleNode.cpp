// ListNode* middleNode(ListNode* head) {
//     ListNode* slow = head;
//     ListNode* fast = head;
//     while(1){
//         if(fast->next == NULL) {
//             return slow;
//         }
//         if(fast->next->next == NULL){
//             return slow->next;
//         }
//         slow=slow->next;
//         fast=fast->next->next;


//     }
//     return slow;
// }