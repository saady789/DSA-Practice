// vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
//     priority_queue<int,vector<int>> q;
//     for(int i=0;i<n;i++){
//         q.push(a[i]);
//     }
//     for(int i=0;i<m;i++){
//         q.push(b[i]);
//     }
//     vector<int> arr;
//     while(!q.empty()){
//         arr.push_back(q.top());
//         q.pop();
//     }
//     return arr;
// }