int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            pq.push(mat[i][j]);
        }
    }
    k = k-1;
    while(k--){
        pq.pop();
    }
    return pq.top();
}