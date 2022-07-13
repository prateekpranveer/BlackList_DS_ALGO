bool findAncestor(Node*root, vector<int>&v, int x){
      if (!root) return false;
      v.push_back(root->data);
      if (root->data==x) return true;
      if (findAncestor(root->left, v ,x) || findAncestor(root->right, v, x)) return true;
      v.pop_back();
      return false;
    }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int>v;
        findAncestor(root, v, target);
        v.pop_back();
        reverse(v.begin(), v.end());
        return v;
    }