
// #include <iostream>
// #include <vector>
// using namespace std;

// class Heap {
// public:
//     vector<int> arr;
//     int size;

//     Heap() : size(0) {
//         arr.push_back(-1); // Add a placeholder element at index 0
//     }

//     void insert(int data) {
//         arr.push_back(data);
//         size++;
//         int index = size;

//         while (index > 1) {
//             int parent = index / 2;
//             if (arr[parent] < arr[index]) {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             } else {
//                 break;
//             }
//         }
//     }

//     void del() {
//         if (size == 0) {
//             cout << "Nothing to delete" << endl;
//             return;
//         }

//         swap(arr[1], arr[size]);
//         arr.pop_back();
//         size--;

//         int index = 1;
//         while (true) {
//             int leftIndex = 2 * index;
//             int rightIndex = 2 * index + 1;
//             int largestIndex = index;

//             if (leftIndex <= size && arr[leftIndex] > arr[largestIndex]) {
//                 largestIndex = leftIndex;
//             }
//             if (rightIndex <= size && arr[rightIndex] > arr[largestIndex]) {
//                 largestIndex = rightIndex;
//             }

//             if (largestIndex != index) {
//                 swap(arr[index], arr[largestIndex]);
//                 index = largestIndex;
//             } else {
//                 break;
//             }
//         }
//         cout << "Successfully Deleted" << endl;
//     }

//     void print() {
//         for (int i = 1; i <= size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Heap h;
//     h.insert(55);
//     h.insert(53);
//     h.insert(54);
//     h.insert(52);
//     h.insert(50);
//     h.print(); // Output: 55 53 54 52 50
//     h.del();
//     h.print(); // Output: 54 53 50 52
//     return 0;
// }

