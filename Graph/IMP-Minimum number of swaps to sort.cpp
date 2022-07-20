int minSwaps(vector<int>&nums)
	{
	    int c = 0;
	    vector<pair<int,int>>v;
	    for (int i = 0; i<nums.size(); i++){
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    for (int i = 0; i<v.size(); i++){
	        if (v[i].second!=i){
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	        else continue;
	    }
	    return c;
	}