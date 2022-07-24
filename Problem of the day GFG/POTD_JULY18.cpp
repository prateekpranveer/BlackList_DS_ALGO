void bfs(Node * root, vector<int>&v){
    if ( root == NULL ) return;
    v.push_back(root->data);
    if (root->left) bfs(root->left,v);
    if (root->right) bfs(root->right,v);
}

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    vector<int>v;
    sort(v.begin(),v.end());
    int id = 0;
    bfs(root,v);
    auto it = lower_bound(v.begin(),v.end(),input);
    if (*it == INT_MAX) return input;
    return *it;
    
}