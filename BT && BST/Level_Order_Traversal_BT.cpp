vector <int> LevelOrder(Node * root){
    vector <int> v;
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node * t = q.top();
        q.pop();
        v.push_back(t->data);
        if(t->left) q.push(t->left);
        if(t->right) q.push(t->right);
    }

    return v;
}