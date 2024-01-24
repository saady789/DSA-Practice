
// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int> st;
//         for(int i=0;i<n;i++){st.push(i);}
//         int n1;
//         int n2;
//         while(st.size()>1){
//             n1 = st.top();
//             st.pop();
//             n2 = st.top();
//             st.pop();
//             if( M[n1][n2] == 1 ) {st.push(n2);}
//             else{st.push(n1);}
//         }



//         int p = st.top();
//         bool flag = false;
//         //row check
//         for(int i=0;i<n;i++){
//             if(i==p) continue;
//             if(M[p][i] == 1) return -1;
//             if(M[i][p] == 0) return -1;
//         }
//         return p;
//         //col check


//     }
// };