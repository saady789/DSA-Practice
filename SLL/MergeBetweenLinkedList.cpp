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
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* ptrA = list1;
//         ListNode* ptrB = list1;
//         for(int i=2;i<=a;i++){
//             ptrA = ptrA->next;
//         }
//          for(int i=0;i<=b;i++){
//             ptrB = ptrB->next;
//         }


//         ListNode* ptrL2 = list2;
//         while(ptrL2->next != NULL){
//             ptrL2 = ptrL2->next;
//         }
//         ptrA->next = list2;
//         ptrL2->next = ptrB;

//         return list1;

//     }
// };