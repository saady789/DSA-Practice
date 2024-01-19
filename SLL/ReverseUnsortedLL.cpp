// *****************************************************************/

// Node *removeDuplicates(Node *head)
// {
//     if(head->next == NULL) return head;

//     Node* dummy = new Node(-1);
//     dummy->next = head;
//     unordered_map<int, bool> myMap;

//     Node* prev = dummy;

//     while(head!=NULL){
//          if (myMap[head->data] == true ){

//               prev->next = head->next;

//              head=head->next;
//          }
//          else {
//             myMap[head->data] = true;
//              prev = head;
//              head=head->next;

//          }
//     }
//     return dummy->next;
// }