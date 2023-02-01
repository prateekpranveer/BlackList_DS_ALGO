  int mind (int sum, int arr[], int n,vector<vector<int>>&v) {
      if (n==0) return 0;
      if (v[sum][n]!=-1) return v[sum][n];
      if (sum>=2*arr[n-1]) {
          return v[sum][n] = max(mind(sum,arr, n-1,v), 2*arr[n-1] + mind(sum-2*arr[n-1], arr, n-1,v));
      }
      else {
          return  v[sum][n] = mind(sum,arr, n-1,v);
      }
  }
	int minDifference(int arr[], int n)  { 
	    int sum = 0;
	    for (int i = 0; i<n; i++) {
	        sum+=arr[i];
	    }
	    vector<vector<int>>v(sum+1, vector<int>(n+1,-1));
	    int x = mind(sum,arr,n,v);
	    return sum-x;
	} 