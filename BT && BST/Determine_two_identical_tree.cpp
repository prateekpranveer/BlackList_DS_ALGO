void dfs(Node*root, vector<int>&v){
        if (root==NULL) return;
        v.push_back(root->data);
        if (root->left) dfs(root->left,v);
        if (root->right) dfs(root->right,v);
    }

    bool isIdentical(Node *r1, Node *r2)
    {
        vector<int>v1;
        vector<int>v2;
        dfs(r1,v1); dfs(r2,v2);
        return (v1==v2);

    }