int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int n = KnightPos[0]-1;
	    int m = KnightPos[1]-1;
	    int tn = TargetPos[0]-1;
	    int tm = TargetPos[1]-1;
	    vector<vector<int>>v(N, vector<int>(N, 0));
	    queue<pair<int,int>>q;
	    q.push({n,m});
	    while(!q.empty()){
	        auto it = q.front();
	        q.pop();
	        int c = it.first;
	        int d = it.second;
	        
	        if (c+2>=0 && d-1>=0 && c+2<N && d-1<N && v[c+2][d-1]==0){
	            v[c+2][d-1] = v[c][d] + 1;
	            q.push({c+2,d-1});
	        }
	        if (c+2>=0 && d+1>=0 && c+2<N && d+1<N && v[c+2][d+1]==0){
	            v[c+2][d+1] = v[c][d] + 1;
	            q.push({c+2,d+1});
	        }
	        if (c-2>=0 && d-1>=0 && c-2<N && d-1<N && v[c-2][d-1]==0){
	            v[c-2][d-1] = v[c][d] + 1;
	            q.push({c-2,d-1});
	        }
	        if (c-2>=0 && d+1>=0 && c-2<N && d+1<N && v[c-2][d+1]==0){
	            v[c-2][d+1] = v[c][d] + 1;
	            q.push({c-2,d+1});
	        }
	        if (c+1>=0 && d-2>=0 && c+1<N && d-2<N && v[c+1][d-2]==0){
	            v[c+1][d-2] = v[c][d] + 1;
	            q.push({c+1,d-2});
	        }
	        if (c-1>=0 && d-2>=0 && c-1<N && d-2<N && v[c-1][d-2]==0){
	            v[c-1][d-2] = v[c][d] + 1;
	            q.push({c-1,d-2});
	        }
	        if (c+1>=0 && d+2>=0 && c+1<N && d+2<N && v[c+1][d+2]==0){
	            v[c+1][d+2] = v[c][d] + 1;
	            q.push({c+1,d+2});
	        }
	        if (c-1>=0 && d+2>=0 && c-1<N && d+2<N && v[c-1][d+2]==0){
	            v[c-1][d+2] = v[c][d] + 1;
	            q.push({c-1,d+2});
	        }
	        
	    }
	    
	    return v[tn][tm];
	    
	}