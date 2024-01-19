// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         vector<int> arr ;
//         ListNode* temp ;
//         for(int i=0;i<lists.size();i++){
//             temp = lists[i];
//             while(temp!=NULL){
//                 arr.push_back(temp->val);
//                 temp=temp->next;
//             }
//         }

//         sort(arr.begin(),arr.end());

//         ListNode* newHead = new ListNode(0);
//         ListNode* newHeadPtr = newHead;
//         for(int i=0;i<arr.size();i++){
//             ListNode* n = new ListNode(arr[i]);
//             newHeadPtr->next = n;
//             newHeadPtr = newHeadPtr->next;
//         }

//         return newHead->next;
//     }
// };