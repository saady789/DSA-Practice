// #include <bits/stdc++.h> 

// char toLowerCase(char c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c - 'A' + 'a';
//     }
//     return c;
// }

// bool isAlphanumeric(char c) {
//     return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
// }

// bool checkPalindrome(string s) {
//     int start = 0;
//     int end = s.length() - 1;

//     while (start <= end) {
//         while (start <= end && !isAlphanumeric(s[start])) {
//             start++;
//         }

//         while (start <= end && !isAlphanumeric(s[end])) {
//             end--;
//         }

//         if (start <= end) {
//             if (toLowerCase(s[start]) != toLowerCase(s[end])) {
//                 return false;
//             }
//             start++;
//             end--;
//         }
//     }

//     return true;
// }
