// class Solution {
// public:
//     bool isAnagram(string s1,string s2){
//         sort(s1.begin(),s1.end());
//         sort(s2.begin(),s2.end());
//         if(s1==s2) return true;
//         else return false;
//     }
//     bool checkInclusion(string s1, string s2) {
//         int start = 0;
//         int end = s1.length();
//         int len = s1.length();
//         while(end<=s2.length()){
//             if(isAnagram( s2.substr(start,len) ,s1)) return true;
//             else {start++;end++;}

//         }  
//          return false;
//     }

// };