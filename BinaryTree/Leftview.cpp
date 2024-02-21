// vector<int> leftView(Node *root)
// {
//    vector<int> ans;
//    if(!root) return ans;
//    queue<Node*> q;
//    q.push(root);

//    while(!q.empty()) {
//        int size = q.size();
//        int temp = q.front()->data;
//        ans.push_back(temp);

//        for(int i=1;i<=size;i++){
//            Node* t = q.front();
//            q.pop();
//            if(t->left) q.push(t->left);
//            if(t->right) q.push(t->right);
//        }

//    }
//    return ans;
// }