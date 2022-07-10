vector<int> reverseLevelOrder(Node *root)
{
    queue <Node*> q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node * front = q.front();
        q.pop();
        v.push_back(front->data);
        if(front->right) q.push(front->right);
        if (front->left) q.push(front->left);
    }
    
    reverse(v.begin(), v.end());
    return v;
}