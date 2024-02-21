// vector<int> bottomView(Node *root) {
//     map<int,int> mp;
//     vector<int> ans;
//     queue<pair<Node*,int>> q;
//     if (!root) return ans;
//     q.push(make_pair( root,0 ));

//     while(!q.empty()) {
//         Node* temp = q.front().first;
//         int hd = q.front().second;
//         mp[hd] = temp->data;

//         q.pop();

//         if(temp->left) { q.push( make_pair(temp->left,hd-1) ); }
//         if(temp->right) { q.push( make_pair(temp->right,hd+1) ); }


//     }

//     for (const auto pair : mp) {
//         ans.push_back(pair.second);
//     }
//     return ans;
// }