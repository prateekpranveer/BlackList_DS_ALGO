vector <int> bottomView(Node *root) {
      vector<int>v;
      if (root==NULL) return v;
      map<int,int>m;
      queue<pair<Node*,int>>q;
      q.push({root,0});
      while(!q.empty()){
          Node* test = q.front().first;
          int vertical = q.front().second;
          q.pop();
          m[vertical]=test->data;
          if (test->left) q.push({test->left, vertical-1});
          if (test->right) q.push({test->right, vertical+1});
      }
      for (auto x:m){
          v.push_back(x.second);
      }
      return v;
    }