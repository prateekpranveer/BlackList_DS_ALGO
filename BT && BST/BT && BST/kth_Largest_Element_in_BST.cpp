    // Needs a Space Optimized Solution
    
    void inOrder(Node*&root){
        if (root==NULL) return;
        v.push_back(root->data);
        if (root->left) inOrder(root->left);
        if (root->right) inOrder(root->right);
    }
    
    int kthLargest(Node *root, int K)
    {
        inOrder(root);
        sort(v.begin(), v.end());
        return v[v.size()-K];
    }