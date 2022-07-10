void traverseLeft(Node * root, vector<int>&v){
        if (root==NULL) return;
        if (root->left==NULL && root->right==NULL) return;
        v.push_back(root->data);
        if (root->left){
            traverseLeft(root->left,v);
        }
        else traverseLeft(root->right,v);
    }
    
    void traverseLeaf(Node * root, vector<int>&v){
        if (root==NULL) return;
        if (root->left==NULL && root->right==NULL){
           v.push_back(root->data);
           return;
        } 
        traverseLeaf(root->left,v);
        traverseLeaf(root->right,v);
    }
    
    void traverseRightReverse(Node * root, vector<int>&v){
        if (root==NULL) return;
        if (root->left==NULL && root->right==NULL) return;
        if (root->right){
            traverseRightReverse(root->right,v);
        }
        else{
            traverseRightReverse(root->left,v);
        }
        v.push_back(root->data);
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int>v;
        if (root==NULL) return v;
        v.push_back(root->data);
        traverseLeft(root->left,v);
        traverseLeaf(root->left,v);
        traverseLeaf(root->right,v);
        traverseRightReverse(root->right,v);
        return v;
        //Your code here
    }