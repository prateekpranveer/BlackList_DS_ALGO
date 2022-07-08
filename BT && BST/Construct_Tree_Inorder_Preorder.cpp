Node * build(int pre[], int preStart, int preEnd, int in[], int inStart, int inEnd, map<int,int>&m){
        if (preStart>preEnd || inStart>inEnd) return 0;
        
        Node * root = new Node(pre[preStart]);
        int indexRoot = m[root->data];
        int leftLength = indexRoot-inStart;

        root->left = build(pre,preStart+1, preStart+leftLength, in, inStart, indexRoot-1 ,m);
        root->right = build(pre,preStart+leftLength+1, preEnd, in, indexRoot+1, inEnd,m);
        
        return root;
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        map<int,int>m;
        for (int i = 0; i<n; i++){
            m[in[i]] = i;
        }
        
        Node * root = build(pre,0,n-1,in,0,n-1,m);
        return root;
        
    }