// #include <bits/stdc++.h> 

// class CircularQueue {
// public:
//     int *arr;
//     int front;
//     int back;
//     int size;

//     CircularQueue(int n) {
//         arr = new int[n];
//         front = 0;
//         back = 0;
//         size = n;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value) {
//         if ((back + 1) % size == front) {
//             // Can't insert, the queue is full
//             return false;
//         } else {
//             arr[back] = value;
//             back = (back + 1) % size;
//             return true;
//         }
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue() {
//         if (front == back) {
//             // Queue is empty
//             return -1;
//         } else {
//             int data = arr[front];
//             front = (front + 1) % size;
//             return data;
//         }
//     }
// };
