  // Using Kosaraju's TopoSorting Algorithm
  
  void topo(int i, vector<int>adj[], stack<int>&st, vector<int>&vis) {
      vis[i] = true;
      for (auto x: adj[i]) {
          if (!vis[x]) {
              topo(x,adj,st,vis);
          }
      }
      st.push(i);
  }
  
  void dfs(int i, vector<int>adj[], int &sum, int &curr_ct, vector<int>&newvis) {
      newvis[i] = true;
      for (auto x: adj[i]) {
          if (!newvis[x]) {
              dfs(x,adj,sum,curr_ct,newvis);
          }
      }
      sum+=i;
      curr_ct++;
  }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    vector<int> adj[N+1];
    for (int i = 0; i<N; i++) {
        if (Edge[i]!=-1) adj[i].push_back(Edge[i]);
    }
    vector<int>vis(N+1,false);
    stack<int>st;
    for (int i = 0; i<N; i++) {
        if (!vis[i]) {
            topo(i,adj,st,vis);
        }
    }
    vector<int>transpose[N];
    vector<int>newvis(N+1,false);
    
    // Doing the Transpose of a Directed Graph
    for (int i = 0; i<N; i++) {
        for (auto it:adj[i]) {
            transpose[it].push_back(i);
        }
    }
    int total = 0;
    int ct = 0;
    while(!st.empty()) {
        int sum = 0;
        int curr_ct = 0;
        int t = st.top();
        if (!newvis[t]) {
            ct++;
            dfs(t, transpose, sum, curr_ct, newvis);
        }
        st.pop();
        if (curr_ct>1)total = max(sum, total);
    }
    if (ct==N) return -1;
    return total;
  }