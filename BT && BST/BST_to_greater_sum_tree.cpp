
// TLE Sulution

void bfs(Node * root, vector<int>&v){
        if (root==NULL) return;
        bfs(root->right,v);
        v.push_back(root->data);
        bfs(root->left,v);
    }
    
    void largeSum(Node * root, vector<int>&v){
        if (root==NULL) return;
        int sum = 0;
        for (int i = 0; i<v.size(); i++){
            if (root->data<v[i]){
                sum+=v[i];
            }
        }
        root->data=sum;
        largeSum(root->left,v);
        largeSum(root->right,v);
    }
    void transformTree(struct Node *root)
    {
        vector<int> v;
        bfs(root,v);
        largeSum(root,v);
    }