// class Solution {
// public:
//     void solve(vector<string> &answer, vector<vector<int>> &m, string &temp, int n, int r, int c) {
//         // Base case
//         if (r < 0 || r >= n || c < 0 || c >= n || m[r][c] == 0) {
//             return;
//         }

//         // Check if reached destination
//         if (r == n - 1 && c == n - 1) {
//             answer.push_back(temp);
//             return;
//         }

//         // Mark the current cell as visited
//         m[r][c] = 0;

//         // Recursive calls
//         temp.push_back('D');
//         solve(answer, m, temp, n, r + 1, c);
//         temp.pop_back();

//         temp.push_back('U');
//         solve(answer, m, temp, n, r - 1, c);
//         temp.pop_back();

//         temp.push_back('R');
//         solve(answer, m, temp, n, r, c + 1);
//         temp.pop_back();

//         temp.push_back('L');
//         solve(answer, m, temp, n, r, c - 1);
//         temp.pop_back();

//         // Backtrack: Mark the current cell as unvisited
//         m[r][c] = 1;
//     }

//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<string> answer;
//         if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
//             return answer;
//         }
//         string output;
//         solve(answer, m, output, n, 0, 0);
//         return answer;
//     }
// };
