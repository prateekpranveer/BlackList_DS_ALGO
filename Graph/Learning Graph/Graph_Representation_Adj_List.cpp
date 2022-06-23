#include <bits/stdc++.h>
using namespace std;
// Input given can be in the format of n, m
//n = no of nodes
// m = no of edges


//Adjacency Matrix method
// create a matrix of node x node

int main(){
    int n, m;
    vector <pair<int,int>> adj[n+1];
    for (int i = 0; i<m; i++){
        // Inputing Weighted Graph
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    return 0;
}

