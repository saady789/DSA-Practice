// class Comparator {
//     public:
//     bool operator()(pair<Node*,int> lhs, pair<Node*,int> rhs) const {
//         // Define your comparison logic here
//         return lhs.first->data > rhs.first->data; // Reverse the comparison for Min-Heap
//     }
// };
// Node* mergeKLists(vector<Node*> &listArray){
//     priority_queue< pair<Node*,int>, vector<pair<Node*,int>>,Comparator> pq;
//     Node* ans = new Node(-1);
//     Node* ansPtr = ans;
//     for (int i = 0; i < listArray.size(); i++) {
//     pq.push(make_pair(listArray[i],i));
//     }
//     while (pq.size() > 0) {
//         auto t = pq.top();
//         Node* temp = t.first;
//         int index = t.second;
//         pq.pop();
//         ans->next = temp;
//         ans = ans->next;
//         if (temp->next != NULL) {
//         pq.push(make_pair(temp->next,index));
//         }
//     }
//     return ansPtr->next;
// }