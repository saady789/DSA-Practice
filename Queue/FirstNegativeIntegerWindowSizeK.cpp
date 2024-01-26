// vector<long long> printFirstNegativeInteger(long long int A[],
//                                          long long int N, long long int K) {

// vector<long long> ans;
// deque<int> dq;
// int left = 0;
// int right = K-1;
// for(int i=left;i<=right;i++){
//     if(A[i]<0) dq.push_back(i);
// }

// while(right<N){
//     if(!dq.empty()){
//         ans.push_back(A[dq.front()]);
//     }
//     else ans.push_back(0);
//     left++;right++;

//     if( !dq.empty() && dq.front() < left ) dq.pop_front();
//     // if( !dq.empty() && dq.front() == left) {//good to go}
//     if(A[right] < 0 ) dq.push_back(right);}


// return ans;
//                                          }