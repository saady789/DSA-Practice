// class Solution {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//         //edge case 1 : checking if endword is in wordlist 
//         int c = 0;
//         int e = 0;
//         for(string a:wordList){
//             if(a==endWord) {c++;}
//             if(a==beginWord)e++;
//         }
//         if(c==0) return 0;
//         //edge case 1 ends here
//         unordered_map<string,int> mp; //<string,status> 0 for unused and 1 for used
//         for(string a:wordList){
//             mp[a] = 0;
//         }
//         int size = beginWord.size();
//         vector<char> arr[size];
//         for(int i=0;i<size;i++){
//             set<char> charVector; 
//             for(int j=0;j<wordList.size();j++){
//                 charVector.insert(wordList[j][i]);
//             }
//             for(char a:charVector){
//                 arr[i].push_back(a);
//             }
//         }
//         queue<pair<string,int>> q; //<string,number>
//         q.push(make_pair(beginWord,1));
//         mp[beginWord] = 1; //its now used
//         int num = INT_MAX;
//         bool f = false;
//         while(!q.empty()){
//             auto it = q.front();
//             q.pop();
//             string s = it.first;
//             int d = it.second;
//             if(s==endWord){
//                 if(d<num) num = d;
//                 f = true;
//                 break;
//             }
//             for(int i=0;i<size;i++){
//                 for(int j=0;j<arr[i].size();j++){
//                     char o = s[i];
//                     s[i] = arr[i][j];

//                     if(mp.find(s)!=mp.end() && mp[s] ==0 ){
//                         q.push(make_pair(s,d+1));
//                         mp[s]=1;
//                     }
//                     s[i] = o;
//                 }
//             }


//         }
//         if(!f) return 0;
//         return num;
//     }
// };