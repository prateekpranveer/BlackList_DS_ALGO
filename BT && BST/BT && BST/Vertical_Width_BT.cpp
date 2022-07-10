int verticalWidth(Node* root)
{
    if (root==NULL) return 0;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    map<int,int>m;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        if (it.first->right) q.push({it.first->right, it.second+1});
        if (it.first->left) q.push({it.first->left, it.second-1});
        if (m.find(it.second)==m.end()) m.insert({it.second, it.first->data});
    }
    
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (auto x:m){
        maxi = max(x.first,maxi);
        mini = min(x.first,mini);
    }
    return maxi-mini+1;
}