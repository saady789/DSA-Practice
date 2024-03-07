// public:
// //Function to return the minimum cost of connecting the ropes.
// long long minCost(long long arr[], long long n) {
//     priority_queue<long long,vector<long long>,greater<long long> > q;
//     long long cost = 0;
//     for(int i=0;i<n;i++){
//         q.push(arr[i]);
//     }
//     while(q.size()>1){
//         long long sum = 0;
//         sum+= q.top();
//         q.pop();
//         sum += q.top();
//         q.pop();
//         q.push(sum);
//         cost += sum;
//     }
//     return cost;

// }