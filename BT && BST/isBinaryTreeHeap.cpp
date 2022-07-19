bool isHeap(struct Node* tree) {
        queue<Node*> q;
        q.push(tree);
        bool null=false;
        while(!q.empty()){
            Node* top=q.front();
            q.pop();
            if(top->left){
                if(null==false && top->data>=top->left->data){
                    q.push(top->left);
                }else{
                    return false;
                }
            }else{
                null=true;
            }
            if(top->right){
                if(null==false && top->data>=top->right->data){
                    q.push(top->right);
                }else{
                    return false;
                }
            }else{
                null=true;
            }
        }
        return true;
    }