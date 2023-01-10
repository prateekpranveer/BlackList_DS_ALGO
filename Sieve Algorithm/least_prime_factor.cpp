vector<int> leastPrimeFactor(int n) {
        vector<int>v;
	    vector<bool>isPrime(n+1,true);
	    vector<int>lp(n+1,0);
	    isPrime[0] = isPrime[1] = false;
	    lp[1] = 1;
	    lp[0] = 0;
	    for (int i = 2; i<=n; i++) {
	        if (isPrime[i]==true) {
	            lp[i] = i;
	            for (int j = 2*i; j<=n; j+=i) {
	                isPrime[j] = false;
	                if (lp[j]==0) lp[j] = i;
	            }
	        }
	    }
	    
	    for (int i = 0; i<=n; i++) {
	        v.push_back(lp[i]);
	    }
	    return v;
    }