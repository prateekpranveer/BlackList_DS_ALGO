bool check(Node *root)
    {
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
        while(!q.empty()){
            Node * front = q.front().first;
            int level = q.front().second;
            q.pop();
            if (!front->right && !front->left) m[level]++;
            if (front->left) q.push({front->left, level+1});
            if (front->right) q.push({front->right, level+1});
        }
        if (m.size()==1) return true;
        else return false;
    }