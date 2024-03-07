// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         int len = s.length();
//         map<char,char> mp; //< mapping >
//         map<char,char> mp2; //< mapping >

//         for(int i=0;i<len;i++){
//             if(mp.find(s[i]) == mp.end() ){
//                 mp[s[i]] = t[i];
//             }
//             else if( (mp.find(s[i]) != mp.end()) && (mp[s[i]] != t[i])  ) return false;
//         }
//          for(int i=0;i<len;i++){
//             if(mp2.find(t[i]) == mp2.end() ){
//                 mp2[t[i]] = s[i];
//             }
//             else if( (mp2.find(t[i]) != mp2.end()) && (mp2[t[i]] != s[i])  ) return false;
//         }

//         return true;
//     }
// };