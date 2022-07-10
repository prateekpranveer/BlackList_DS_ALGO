vector<int> leftView(Node *root)
{
    queue<pair<Node*, int>>q;
    vector<int>v;
    if (root==NULL) return v;
    map<int,int>m;
    q.push({root, 0});
    m.insert({0,root->data});
    int x = 1;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        if (m.find(it.second)==m.end()) m.insert({it.second, it.first->data});
        if(it.first->left) q.push({it.first->left,(it.second)+1});
        if (it.first->right) q.push({it.first->right,(it.second)+1});
    }
    
    for (auto it:m){
        v.push_back(it.second);
    }
    return v;
}