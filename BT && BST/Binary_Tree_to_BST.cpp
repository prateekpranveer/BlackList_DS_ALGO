void inOrder(Node*root, vector<int>&v){
        if (root==NULL) return;
        if (root->left) inOrder(root->left,v);
        v.push_back(root->data);
        if (root->right) inOrder(root->right,v);
    }
    
    void inOrder2(Node*root, vector<int>&v1, int &i){
        if (root==NULL) return;
        if (root->left) inOrder2(root->left,v1,i);
        root->data = v1[i];
        i++;
        if (root->right) inOrder2(root->right,v1,i);
    }
    
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
      vector<int>v;
      inOrder(root,v);
      sort(v.begin(),v.end());
      int i = 0;
      inOrder2(root, v,i);
      return root;
    }