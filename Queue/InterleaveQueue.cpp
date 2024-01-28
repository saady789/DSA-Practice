// void rearrangeQueue(queue<int> &q) {
//     int n = q.size() / 2;
//     queue<int> temp;

//     for (int i = 0; i < n; i++) {
//         int j = q.front();
//         q.pop();
//         temp.push(j);
//     }

//     while (!temp.empty()) {
//         q.push(temp.front());
//         temp.pop();
//         q.push(q.front());
//         q.pop();
//     }
//   //you can return the queue from here on depending on the return type of the function 
//   return q;
// }


