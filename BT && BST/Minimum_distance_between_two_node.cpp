Node * LCA(Node * root, int a, int b){
        if (root==NULL) return 0;
        if (root->data==a || root->data==b) return root;
        Node * left = NULL;
        Node * right = NULL;
        left = LCA(root->left,a,b);
        right = LCA(root->right,a,b);
        if (left && right) return root;
        if (left) return left;
        if (right) return right;
    }

    
    int distance(Node * root, int a){
        if(root==NULL) return 0;
         if(root->data ==a) return 1;
         int m=distance(root->left,a);
         int n=distance(root->right,a);
         if(m==0&&n==0) return 0;
         if (!m) return n+1;
         if (!n) return m+1;
         return min(n,m)+1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node * x = LCA(root,a,b);
        int l = distance(x,a);
        int m = distance(x,b);
        return l+m-2;
    }