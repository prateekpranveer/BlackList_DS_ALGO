bool find(Node*t, Node*s){
        if (t==NULL && s==NULL) return true;
        if (t==NULL) return false;
        // If s is null we should return true, since a null node is always a subtree, but still we are returning false so that the case goes to "statement 2" for further analysis.
        if (s==NULL) return false;
        if (t->data==s->data) return (find(t->left,s->left)&&find(t->right,s->right));
        return false;
    }
 
    bool isSubTree(Node* t, Node* s) 
    {
        if (t==NULL) return false;
        if (s==NULL) return true;
        if (find(t,s)) return true; // statement 1
        return (isSubTree(t->left,s) || isSubTree(t->right,s)); //statement 2
    }