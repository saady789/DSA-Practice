// void solve(vector<vector<int>>& arr,vector<string> &answer, string ans, int row, int col) {
//     // Base case
//     int rows = arr.size();
//     int cols = arr[0].size();
//     if (row < 0 || row >= rows || col < 0 || col >= cols || arr[row][col] == 0) {
//         return;
//     }
//     // Check if reached destination
//         if (row == rows-1 && col == cols-1) {
//             answer.push_back(ans);
//             return;
//         }


//     // Processing and recursive calls for Down, Left, Right, and Up directions
//     // Mark the current cell as visited
//         arr[row][col] = 0;

//         ans += "D";
//         solve(arr,answer, ans, row + 1, col);
//         ans.pop_back();

//         ans += "L";
//         solve(arr,answer, ans, row, col - 1);
//         ans.pop_back();

//         ans += "R";
//         solve(arr,answer, ans, row, col + 1);
//         ans.pop_back();

//         ans +="U";
//         solve(arr,answer, ans, row - 1, col);
//         ans.pop_back();


//         // Backtrack: Mark the current cell as unvisited
//         arr[row][col] = 1;
// }

// vector<string> searchMaze(vector<vector<int>>& arr, int n) {
//     string ans;
//     vector<string> a;
//     solve(arr,a,"", 0, 0);
//     return a;
// }