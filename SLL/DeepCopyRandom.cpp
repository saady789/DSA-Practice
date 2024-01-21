// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if (head == nullptr) {return nullptr;}
//         unordered_map<Node*,Node*> map;

//         Node* headPtr = head;
//         Node* newhead = new Node(0);
//         Node* newheadPtr = newhead;
//         while(headPtr!=NULL && newheadPtr!=NULL){
//             Node* n = new Node(headPtr->val);
//             newheadPtr->next = n;
//             newheadPtr = newheadPtr->next;
//             map[headPtr] = newheadPtr ;
//             headPtr = headPtr->next;
//         }
//         newhead = newhead->next;
//         newheadPtr = newhead;
//         headPtr = head;
//         Node* tempRandom;
//         while(headPtr!=NULL && newheadPtr!=NULL){
//             tempRandom = headPtr->random;
//             if(tempRandom == NULL) {
//                 newheadPtr->random = NULL;
//             }
//             else {
//                 auto it = map.find(tempRandom);
//                 if(it != map.end()){
//                     newheadPtr->random = it->second;
//                 }

//             }
//             headPtr = headPtr->next;
//             newheadPtr = newheadPtr->next;

//         }
//         return newhead;

//     }
// };