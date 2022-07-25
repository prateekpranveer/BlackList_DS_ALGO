 void dfs(int src, vector<int>&vis, vector<int>v[], stack<int>&s){
        vis[src]=1;
        for(auto it:v[src]) {
            if(!vis[it]) dfs(it, vis, v, s);
        }
        s.push(src);
    }
    string findOrder(string dict[], int N, int K) {
        stack<int>s;
        string final = "";
        vector<int>vis(K,0);
        vector<int>v[K];
        for (int i = 0; i<N-1; i++){
            string a = dict[i];
            string b = dict[i+1];
            int sizeConsider = min(a.size(),b.size());
            for (int j = 0; j<sizeConsider; j++){
                if (a[j]!=b[j]){
                    v[a[j]-'a'].push_back(b[j]-'a');
                    break;
                }
                else continue;
            }
        }
        for (int i = 0; i<K; i++){
            if(!vis[i]){
                vis[i] = 1;
                dfs(i, vis,v,s);
            }
        }
        while(!s.empty()){
            final.push_back(s.top() + 'a');
            s.pop();
        }
        return final;
    }