int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int n = KnightPos[0];
	    int m = KnightPos[1];
	    int tn = TargetPos[0];
	    int tm = TargetPos[1];
	    vector<vector<int>>v(N, vector<int>(N, 0));
	    queue<pair<int,int>>q;
	    q.push({n,m});
	    while(!qempty()){
	        auto it = q.front();
	        q.pop();
	        int c = it.first;
	        int d = it.second;
	        
	        if (c+2<0 && d-1<0 && c+2>=N && d-1>=n && v[c+2][d-1]==0){
	            v[c+2][d-1]++;
	            q.push({c+2,d-1});
	        }
	        if (c+2<0 && d+1<0 && c+2>=N && d+1>=n && v[c+2][d+1]==0){
	            v[c+2][d+1]++;
	            q.push({c+2,d+1});
	        }
	        if (c-2<0 && d-1<0 && c-2>=N && d-1>=n && v[c-2][d-1]==0){
	            v[c-2][d-1]++;
	            q.push({c-2,d-1});
	        }
	        if (c-2<0 && d+1<0 && c-2>=N && d+1>=n && v[c-2][d+1]==0){
	            v[c-2][d+1]++;
	            q.push({c-2,d+1});
	        }
	        if (c+1<0 && d-2<0 && c+1>=N && d-2>=n && v[c+1][d-2]==0){
	            v[c+1][d-2]++;
	            q.push({c+1,d-2});
	        }
	        if (c-1<0 && d-2<0 && c-1>=N && d-2>=n && v[c-1][d-2]==0){
	            v[c-1][d-2]++;
	            q.push({c-1,d-2});
	        }
	        if (c+1<0 && d+2<0 && c+1>=N && d+2>=n && v[c+1][d+2]==0){
	            v[c+1][d+2]++;
	            q.push({c+1,d+2});
	        }
	        if (c-1<0 && d+2<0 && c-1>=N && d+2>=n && v[c-1][d+2]==0){
	            v[c-1][d+2]++;
	            q.push({c-1,d+2});
	        }
	        
	    }
	    
	    return v[tn][tm];
	    
	}