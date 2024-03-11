// class Solution {
// public:
//     bool isSafe(vector<string>& curr, int row, int col) {
//         // Check row
//         int n = curr.size();
//         for (int i = 0; i < curr.size(); i++)
//             if (curr[row][i] == 'Q')
//                 return false;
//         // check column
//         for (int i = 0; i < curr.size(); i++) {
//             if (curr[i][col] == 'Q')
//                 return false;
//         }

//         // Check upper-left diagonal
//         for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//             if (curr[i][j] == 'Q')
//                 return false;

//         // Check upper-right diagonal
//         for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//             if (curr[i][j] == 'Q')
//                 return false;

//         // Check lower-left diagonal
//         for (int i = row, j = col; i < n && j >= 0; i++, j--)
//             if (curr[i][j] == 'Q')
//                 return false;

//         // Check lower-right diagonal
//         for (int i = row, j = col; i < n && j < n; i++, j++)
//             if (curr[i][j] == 'Q')
//                 return false;

//         return true;
//     }
//     void solve(vector<vector<string>>& ans, vector<string>& curr, int colPtr) {
//         // base case
//         int n = curr.size();
//         if (colPtr == n) {
//             // solution found
//             ans.push_back(curr);
//             return;
//         }

//         // processing + recursive calls
//         for (int i = 0; i < n; i++) {
//             if (isSafe(curr, i, colPtr)) {
//                 curr[i][colPtr] = 'Q';
//                 solve(ans, curr, colPtr + 1);
//                 curr[i][colPtr] = '.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         string str;
//         for (int i = 0; i < n; i++) {
//             str += ".";
//         }
//         vector<string> a;
//         for (int i = 0; i < n; i++) {
//             a.push_back(str);
//         }
//         vector<vector<string>> ans;
//         solve(ans, a, 0);

//         return ans;
//     }
// };