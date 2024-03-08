// #include <bits/stdc++.h> 
// class node {
//     public:
//       node(int d,int r,int c) {
//           data = d;
//           row = r;
//           col = c;
//       }
//       int data;
//       int row;
//       int col;
// };

// class Comparator {
//     public:
//     bool operator()(const node* lhs, const node* rhs) const {
//         // Define your comparison logic here
//         return lhs->data > rhs->data; // Reverse the comparison for Min-Heap
//     }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {   vector<int> ans;
//     priority_queue<node*,vector<node*>,Comparator> pq;
//     for (int i = 0; i < kArrays.size(); i++) { 
//         node* n = new node(kArrays[i][0],i,0);
//         pq.push(n);
//      }
//      while (pq.size() > 0) {
//      node* t = pq.top();
//      pq.pop();
//      ans.push_back(t->data);
//      if(t->col + 1 < kArrays[t->row].size()) {
//          node* ins = new node(kArrays[t->row][t->col+1],t->row,t->col+1);
//          pq.push(ins);
//      }
//      }
//      return ans;
// }