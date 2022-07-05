vector<int> findSpiral(Node *root) {
    queue<Node*>q;
    vector<int>v;
    if (root==NULL) return v;
    deque<int>d;
    q.push(root);
    int level = 0;
    while(!q.empty()){
        //looping until q_size
        int qsize = q.size();
        for (int i = 0; i<qsize; i++){
            Node * a = q.front();
            q.pop();
            if (a->left) q.push(a->left);
            if (a->right) q.push(a->right);
            d.push_back(a->data);
        }
        
        // until now deque will contain all element at certain level
        
        if (level%2!=0){
            while(!d.empty()){
                v.push_back(d.front());
                d.pop_front();
            }
        }
        
        else {
        while(!d.empty()){
                v.push_back(d.back());
                d.pop_back();
                }   
            }
            
        level++;
        
        }

    return v;
    
}