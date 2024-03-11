// class Solution {
// public:
//     bool insertionPossible(vector<vector<char>>& board, int row, int col, char val) {
//         // Check row
//         for (int i = 0; i < 9; i++) {
//             if (board[row][i] == val) {
//                 return false;
//             }
//         }

//         // Check column
//         for (int i = 0; i < 9; i++) {
//             if (board[i][col] == val) {
//                 return false;
//             }
//         }

//         // Check subgrid
//         int rowStart = (row / 3) * 3;
//         int colStart = (col / 3) * 3;
//         for (int i = rowStart; i < rowStart + 3; i++) {
//             for (int j = colStart; j < colStart + 3; j++) {
//                 if (board[i][j] == val) {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }

//     bool solve(vector<vector<char>>& board) {
//         for (int i = 0; i < 9; i++) {
//             for (int j = 0; j < 9; j++) {
//                 if (board[i][j] == '.') {
//                     for (char ch = '1'; ch <= '9'; ch++) {
//                         if (insertionPossible(board, i, j, ch)) {
//                             board[i][j] = ch;
//                             if (solve(board)) {
//                                 return true;
//                             }
//                             board[i][j] = '.'; // Backtrack
//                         }
//                     }
//                     return false; // No valid number found
//                 }
//             }
//         }
//         return true; // Puzzle solved
//     }

//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }
// };
