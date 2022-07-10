vector<int> Kdistance(struct Node *root, int k)
{
    vector<int>v;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    
    while(!q.empty()){
        Node * front = q.front().first;
        int level = q.front().second;
        q.pop();
        if (level==k) v.push_back(front->data);
        if (front->left) q.push({front->left,level+1});
        if (front->right) q.push({front->right,level+1});
    }
    return v;
}