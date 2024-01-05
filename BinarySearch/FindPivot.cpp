// #include <iostream>
// #include <vector>

// using namespace std;

// int pivotIndex(vector<int>& nums) {
//     int totalSum = 0;
//     for (int num : nums) {
//         totalSum += num;
//     }

//     int leftSum = 0;
//     for (int i = 0; i < nums.size(); ++i) {
//         totalSum -= nums[i]; // Update totalSum by subtracting the current element
//         if (leftSum == totalSum) {
//             return i; // Return the index if leftSum equals totalSum
//         }
//         leftSum += nums[i]; // Update leftSum by adding the current element
//     }

//     return -1; // Return -1 if no pivot index is found
// }

// int main() {
//     vector<int> nums = {1, 7, 3, 6, 5, 6};
//     int pivot = pivotIndex(nums);
//     cout << "The leftmost pivot index is: " << pivot << endl;

//     return 0;
// }
