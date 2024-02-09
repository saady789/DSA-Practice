// int countLeaves(Node* root)
// {
//    if(root->left==NULL && root->right==NULL) return 1;
//    int count = 0;
//    queue<Node*> q;
//    q.push(root);
//    while(!q.empty()){ 
//        Node* ptr = q.front();
//        q.pop();
//        if(ptr->left== NULL && ptr->right==NULL) {
//            count++;continue;
//        }
//        if(ptr->left== NULL || ptr->right==NULL){
//            if(ptr->left == NULL) q.push(ptr->right);
//            else q.push(ptr->left);
//        }
//        else {
//            q.push(ptr->left);
//            q.push(ptr->right);
//        }

//    }
//    return count;
// }