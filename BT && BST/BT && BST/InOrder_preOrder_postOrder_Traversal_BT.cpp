void traverse(Node*root, vector<int>&v) {
        if(root==NULL)return;
        // preOrder => v.push_back(root->data);
        if(root->left) traverse(root->left,v);
        // inOrder => v.push_back(root->data);
        if(root->right) traverse(root->right,v);
        // postOrder => v.push_back(root->data);
    }
    
    vector<int> inOrder(Node* root) {
        vector<int>v;
        traverse(root,v);
        return v;
        // Your code here
    }