void convert(int arr[], int n) {
	    unordered_map<int,int>um;
	    vector<int>v;
	    for (int i = 0; i<n; i++) {
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(), v.end());
	    for (int i = 0; i<n; i++) {
	        um.insert({v[i],i});
	    }

	    for (int i = 0; i<n; i++) {
	        arr[i] = um[arr[i]];
	    }
	}