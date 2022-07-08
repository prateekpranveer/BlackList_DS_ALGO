vector<vector<int>> levelOrder(Node* node)
{
    queue<pair<Node*,int>>q;
    map<int,vector<int>>m;
    vector<vector<int>>v;
    if (node==NULL) return v;
    q.push({node,0});
    while(!q.empty()){
        auto front = q.front().first;
        int level = q.front().second;
        q.pop();
        m[level].push_back(front->data);
        if (front->left) q.push({front->left,level+1});
        if (front->right) q.push({front->right,level+1});
    }
    for (auto x:m){
        v.push_back(x.second);
    }
}