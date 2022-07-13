void visit(Node*root, int lo, int hi, vector<int>&ans){
        if (root==NULL) return;
        if (root->data>=lo && root->data<=hi) ans.push_back(root->data);
        visit(root->left,lo,hi,ans);
        visit(root->right,lo,hi,ans);
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int>ans;
        visit(root,low,high,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }