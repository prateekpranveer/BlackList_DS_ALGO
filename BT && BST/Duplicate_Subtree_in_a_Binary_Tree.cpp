unordered_set<string>um;
    int flag = 0;
    string duplicate(Node*root){
        if (root==NULL) return "a";
        string s = "";
        if (!root->left && !root->right){
            s = to_string(root->data);
            return s;
        }
        
        else{
            s+=to_string(root->data);
            s+=duplicate(root->left);
            s+=duplicate(root->right);
            if (um.find(s)!=um.end()) flag =1;
            else if (s.size()>=2) {
                um.insert(s);
            }
            return s;
        }
    }
    
    int dupSub(Node *root) {
        duplicate(root);
        return flag;
    }