vector<int> rightView(Node *root)
    {
        vector<int>v;
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
        while(!q.empty()){
            Node * test = q.front().first;
            int vertical = q.front().second;
            q.pop();
            //Updating without checking the found condition will reach us to the end of any level.
            m[vertical] = test->data;
            if(test->left) q.push({test->left, vertical+1});
            if(test->right) q.push({test->right, vertical+1});
        }
        for (auto x:m){
            v.push_back(x.second);
        }
        return v;
    }