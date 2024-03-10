// class MedianFinder {
// public:
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     priority_queue<int, vector<int>> maxHeap;
//     double median;
//     MedianFinder() { median = 0; }
//     void updateMedian() {
//         if (maxHeap.size() == minHeap.size()) {
//             median = (double(maxHeap.top()) + double(minHeap.top())) / 2;
//         } else if (maxHeap.size() > minHeap.size()) {
//             median = double(maxHeap.top());
//         } else {
//             median = double(minHeap.top());
//         }
//     }

//     void addNum(int num) {
//         // Insert the number into the appropriate heap
//         if (maxHeap.empty() || num <= maxHeap.top()) {
//             maxHeap.push(num);
//         } else {
//             minHeap.push(num);
//         }

//         // Balance the heaps if necessary
//         if (maxHeap.size() > minHeap.size() + 1) {
//             minHeap.push(maxHeap.top());
//             maxHeap.pop();
//         } else if (minHeap.size() > maxHeap.size()+1) {
//             maxHeap.push(minHeap.top());
//             minHeap.pop();
//         }

//         updateMedian();
//     }

//     double findMedian() { return median; }
// };
