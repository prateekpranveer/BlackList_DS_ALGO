vector<int> noSibling(Node* node)
{
    vector<int>s;
    queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        Node * curr = q.front();
        q.pop();
        if (curr->left && !curr->right){
            s.push_back(curr->left->data);
        }
        if (curr->right && !curr->left){
            s.push_back(curr->right->data);
        }
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
        }
        
        if (s.size()==0) s.push_back(-1);
        sort(s.begin(),s.end());
        return s;

}