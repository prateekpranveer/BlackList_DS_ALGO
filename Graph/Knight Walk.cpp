int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int  n = KnightPos [0]-1;
	    int m = KnightPos [1]-1;
	    int tn = TargetPos[0]-1;
	    int tm = TargetPos[1]-1;
	    
	    vector<vector<int>>v(N, vector<int>(N,0));
	    
	    queue<pair<int,int>>q;
	    q.push({n,m});
	    while (q.size()){
	        auto  it = q.front();
	        q.pop();
	        int p = it.first;
	        int r = it.second;
	        
	        int dx[8] = {2,2,-2,-2,-1,-1,1,1};
	        int dy[8] = {1,-1,1,-1,2,-2,2,-2};
	        
	        for (int i = 0; i<8; i++){
	            if (p + dx[i]>=0 && r+dy[i]>=0 && p + dx[i]<N && r+dy[i]<N && v[p+dx[i]][r+dy[i]]==0){
	                v[p+dx[i]][r+dy[i]] = v[p][r] + 1;
	                q.push({p+dx[i],r+dy[i]});
	            }
	        }
	    }
	    
	    return v[tn][tm];
	}