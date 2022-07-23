bool isSafe(bool graph [101][101], int &col, int &n, int &src, vector<int>&color){
        for (int i = 0; i<n; i++){
            if (graph[src][i]){
                if (color[i]==col){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isPossible(int src, int &m, int  &n, vector<int>&color, bool graph [101][101]){
        if (src==n) return true;
        for (int col = 1; col<=m; col++){
            if (isSafe(graph, col, n, src, color)) {
                color[src] = col;
                if (isPossible(src+1, m, n, color, graph)) return true;
                color[src] = 0;
            }
        }
        return false;
    }
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> color(n, 0);
        return isPossible(0,m,n,color, graph);
    }