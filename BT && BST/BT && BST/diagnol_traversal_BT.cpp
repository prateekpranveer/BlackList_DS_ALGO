vector<int> diagonal(Node *root)
{
    queue<Node*>q;
    vector<int>v;
    if (root==NULL) return v;
    q.push(root);
    while(!q.empty()){
        Node * front  = q.front();
        q.pop();
        while(!front==NULL){
            if (front->left) q.push(front->left);
            v.push_back(front->data);
            front = front->right;
        }
    }
    return v;

}

/*

void diagnalTraversal(Node*root, queue<Node*>&q, vector<int> &v){
    if (root==NULL) return;
    q.push(root->left);
    v.push_back(root->data);
    diagnalTraversal(root->right,q,v);
}

vector<int> diagonal(Node *root)
{
    queue<Node*>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node * x = q.front();
        q.pop();
        diagnalTraversal(x,q,v);
    }
    return v;
}

*/