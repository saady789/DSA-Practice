// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         if(chars.size()==1){
//             return 1;
//         }
//         string s = "";
//         char temp = chars[0];
//         int count = 1;
//         for(int i=1;i<chars.size();i++){
//             if(chars[i]==temp) {
//                 count++;
//             }
//             else {
//                 s.push_back(temp);
//                 if(count>1) s += to_string(count);

//                 count=1;
//                 temp = chars[i];
//             }
//         }
//         s.push_back(temp);
//         if(count>1) s += to_string(count);


//         chars.clear();
//         for(char a:s){
//             chars.push_back(a);
//         }
//         return chars.size();


//     }
// };