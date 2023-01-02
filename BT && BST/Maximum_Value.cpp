vector<int> maximumValue(Node* node) {
        vector<int>ans;
        queue<pair<Node*,int>>q;
        map<int, vector<int>>m;
        q.push({node,0});
        while (!q.empty()) {
            Node * a = q.front().first;
            int id = q.front().second;
            q.pop();
            m[id].push_back(a->data);
            if (a->right) {
                q.push({a->right,id+1});
            }
            if (a->left){
                q.push({a->left,id+1});
            }
        }
        for (auto x:m) {
            int maxe = *max_element(x.second.begin(),x.second.end());
            ans.push_back(maxe);
        }
        return ans;
    }