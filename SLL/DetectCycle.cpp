// bool isCircular(Node* head) {
//     if (head == NULL) return false;

//     Node* slow = head;
//     Node* fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             return true;  // Detected a cycle
//         }
//     }

//     return false;  // No cycle detected
// }
