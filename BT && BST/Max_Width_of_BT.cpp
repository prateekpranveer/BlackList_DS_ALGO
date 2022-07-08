int getMaxWidth(Node* root) {
        
        map<int,vector<int>>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node * t = q.front().first;
            int level = q.front().second;
            q.pop();
            m[level].push_back(t->data);
            if (t->left) q.push({t->left, level+1});
            if (t->right) q.push({t->right, level+1});
        }
        int maxSize = INT_MIN;
        for (int i = 0; i<m.size(); i++){
            int x = m[i].size();
            maxSize = max(maxSize,x);
        }
        return maxSize;
    }