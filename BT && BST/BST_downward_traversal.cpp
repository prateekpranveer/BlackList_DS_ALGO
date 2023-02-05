Node * findTarget (Node * root, int target) {
        queue<pair<Node*,int>>q;
        q.push({root, 0});
        while (!q.empty()) {
            auto x = q.front();
            auto n = x.first;
            auto v = x.second;
            if (n->data==target) return n;
            else if (target>n->data) {
                if (n->right) q.push({n->right, v+1});
            }
            else {
                if (n->left) q.push({n->left, v-1});
            }
            q.pop();
        }
        return NULL;
    }
    
    long long int verticallyDownBST(Node *root,int target){
        Node * node = findTarget(root, target);
        if (node==NULL) return -1;
        queue<pair<Node*,int>>q;
        q.push({node, 0});
        long long sum = 0;
        while (!q.empty()) {
            auto x = q.front();
            q.pop();
            auto n = x.first;
            auto vertical = x.second;
            if (x.second==0) sum+=x.first->data;
            if (n->left) {
                q.push({n->left, vertical-1});
            }
            if (n->right) {
                q.push({n->right,vertical+1});
            }
        }
        return sum-target;
    }