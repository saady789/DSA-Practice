//iterative

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//    LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *current = head;
//     LinkedListNode<int> *nextNode = NULL;

//     while (current != NULL) {
//         nextNode = current->next; // Save the next node
//         current->next = prev;      // Reverse the link
//         prev = current;            // Move to the next pair of nodes
//         current = nextNode;        // Move to the next node
//     }

//     // The new head is the last node, which is now the first node
//     head = prev;
//     return head;
// }






//recursive call
// LinkedListNode<int> *reverse(LinkedListNode<int> *prev,LinkedListNode<int> *current,LinkedListNode<int> *nextNode){
//     //basecase
//     if(current==NULL) return prev;

//     //processing 
//     nextNode = current->next;
//     current->next = prev;
//     prev = current;

//     //recursive calls 
//     return reverse(prev,nextNode,nextNode);

// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {

//     LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *current = head;
//     LinkedListNode<int> *nextNode = NULL;
//     LinkedListNode<int> *answer = reverse(prev,current,nextNode);
//     return answer;