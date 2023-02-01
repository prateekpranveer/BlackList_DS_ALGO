long long maxProduct(vector<int> arr, int n) {
	    long long ma = arr[0];
	    long long mi = arr[0];
	    long long maximum = arr[0];
	    for (int i = 1; i<n; i++) {
	        if (arr[i]<0) {
	            swap(ma,mi);
	            ma = max(arr[i]*1ll, arr[i]*ma);
	            mi = min(arr[i]*1ll, arr[i]*mi);
	        }
	        else {
	            ma = max(arr[i]*1ll, arr[i]*ma);
	            mi = min(arr[i]*1ll, arr[i]*mi);
	        }
	        maximum = max(maximum, ma);
	    }
	    return maximum;
	}