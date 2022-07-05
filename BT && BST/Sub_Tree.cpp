    void inOrder(Node*root, vector<int>&v){
        if (root==NULL) return;
        if (root->left) inOrder(root->left,v);
        v.push_back(root->data);
        if (root->right) inOrder(root->right,v);
    }
    
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        vector<int>v1;
        vector<int>v2;
        inOrder(T,v1);
        inOrder(S,v2);
        
        //compare two vectors O(n^2)
 
    }