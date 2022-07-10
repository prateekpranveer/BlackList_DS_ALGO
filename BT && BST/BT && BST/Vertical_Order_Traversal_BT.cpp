vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,pair<int,int>>> q;
        map<int,map<int,vector<int>>> m;
        vector<int>v;
        if (!root) return v;
        
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it = q.front();
            Node*node = it.first;
            q.pop();
            int vertical = it.second.first;
            int level = it.second.second;
            m[vertical][level].push_back(node->data);
            if (node->left) q.push({node->left, {vertical-1, level+1}});
            if (node->right) q.push({node->right, {vertical+1, level+1}});
        }
        for (auto x:m){
            for (auto y:x.second){
                for (auto z:y.second){
                    v.push_back(z);
                }
            }
        }
        return v;
        //Your code here
    }