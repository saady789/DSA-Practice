// int minimumJumps(vector<int> &arr, int n)
// {


// if (n <= 1) {
//         return 0; // If the array has only one element or no elements, no jumps needed
//     }

//     if (arr[0] == 0) {
//         return -1; // If the first element is 0, can't move forward
//     }
//     int prevSum = 0;
//     int prev = -1;
//     int jumps = 0;
//     int target = arr.size()-1;
//     int i=0;
//     int temp;


//     while (i <= target) {

//  temp = arr[i]+i;

//  if (temp >= target) {
//             jumps++;
//             return jumps;
//         }
// if(prevSum==temp) {if(prev==i) return -1;}



//                 // i--;continue;
//                 int maxIndex = -10;
//                 int maxSum=-10;
//                 for(int j=prev+1;j<=i;j++){
//                     if((arr[j]+j) > maxSum ) {
//                         maxIndex=j;maxSum=(j+arr[j]);
//                     }
//                 }
//                 if(maxIndex != i ) {i = maxIndex;continue;}


//         prevSum = temp;
//         prev = i;
//         jumps++;
//         i = temp;
//     }
// }
