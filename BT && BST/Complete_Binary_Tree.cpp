bool isCompleteBT(Node* root){
        bool nullFound = false;
        Node * x = NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node*t = q.front();
            q.pop();
            // if there is a NULL node, make nullFound = true;
            if (t==NULL) nullFound  = true;
            else{
            	// check if NULL node has already been found. 
            	// i.e (nullFound has already been true)
                if (nullFound==true) return false;
                //continue pushing in the queue
                if (t->left) q.push(t->left);
                if (!t->left) q.push(x);
                if (t->right) q.push(t->right);
                if (!t->right) q.push(x);
            }
        }
        return true;
    }