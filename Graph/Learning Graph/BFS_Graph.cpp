// Start from any given Node
// Visited all adjacent node
// if No adjacent node left then move to next node
// Mark visited arr[] as true for each

// BFS is basically traversing adjecent nodes at first and after that move to the next node.


/*



int visited[n+1];
for (int i = 0; i<=n; i++){
    if (visited[i]==0){
        bfs(i);
    }
}


*/


#include <bits/stdc++.h>
using namespace std;



vector <int> bfsOfGraph(int V, vector<int> &adj){
    vector<int> bfsx;
    vector <int> visited(V+1, 0);
    for (int i = 0; i<=V; i++){
        if (!visited[i]){
            queue<int>q;
            q.push(i);
            visited[i] = true;

            while(!q.empty()){
                int x = q.front();
                q.pop();
                bfsx.push_back(x);

                for (auto it:adj[x]){
                    if (!visited[it])
                        q.push(it);
                        visited[it] = 1;
                }
            }
        }
    }

    return bfsx;
}
