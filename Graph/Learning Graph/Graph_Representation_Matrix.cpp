#include <iostream>
using namespace std;
// Input given can be in the format of n, m
//n = no of nodes
// m = no of edges


//Adjacency Matrix method
// create a matrix of node x node

int main(){
    int n, m;
    int adj_matrix[n+1][n+1];

    for (int i = 0; i<=n; i++){
        int u, v;
        cin>>u>>v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }
    return 0;
}

