// #include <bits/stdc++.h>

// class Queue {
// public:
//     int frontIndex;
//     int back;
//     vector<int> arr;

//     Queue() {
//         arr = vector<int>(10);
//         frontIndex = 0;
//         back = 0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         return (frontIndex == back);
//     }

//     void enqueue(int data) {
//         if (back <= 9)
//             arr[back] = data;back++;
//     }

//     int dequeue() {
//         if(frontIndex==back) return -1;
//         int data = arr[frontIndex];
//         frontIndex++;
//         if (frontIndex == back) {
//             frontIndex = 0;
//             back = 0;
//         }
//         return data;
//     }

//     int front() {
//          if(frontIndex == back) {
//             return -1;
//         }
//         else
//         {
//             return arr[frontIndex];
//         }
//     }
// };
