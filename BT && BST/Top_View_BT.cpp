vector<int> topView(Node *root)
    {
        vector<int>v;
        if (root==NULL) return v;
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node * node = it.first;
            int line = it.second;
            if (m.find(line)==m.end()) m.insert({line,node->data});
            if (node->left) q.push({node->left, line-1});
            if (node->right) q.push({node->right, line+1});
        }
        
        for (auto x:m){
            v.push_back(x.second);
        }
        return v;
    }