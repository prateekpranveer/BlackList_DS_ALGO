vector <int> zigZagTraversal(Node* root)
    {
        vector<int>v;
        // for the property of pull front and pull back
        deque<int>order;
        queue<Node*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size = q.size();
            for (int i = 0; i<size; i++){
                Node * temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                order.push_back(temp->data);
            }
            
            if(level%2==0){
                while(!order.empty()){
                    v.push_back(order.front());
                    order.pop_front();
                }
            }
            else{
                while(!order.empty()){
                    v.push_back(order.back());
                    order.pop_back();
                }
            }
            level++;
        }
        return v;
    }