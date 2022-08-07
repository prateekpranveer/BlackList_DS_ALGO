void rearrange(int arr[], int n) {
	    stack<int>pos;
	    stack<int>neg;
	    vector<int>v;
	    for (int i = n-1; i>=0; i--){
	        if (arr[i]>=0) pos.push(arr[i]);
	        else neg.push(arr[i]);
	    }
	
	    while(!pos.empty() && !neg.empty()){
	        v.push_back(pos.top());
	        pos.pop();
	        v.push_back(neg.top());
	        neg.pop();
	    }
	    
	    if (neg.empty()){
	        while(!pos.empty()){
	            v.push_back(pos.top());
	            pos.pop();
	        }
	    }
	    if (pos.empty()){
	        while(!neg.empty()){
	            v.push_back(neg.top());
	            neg.pop();
	        }
	    }
	    for (int i = 0; i<n; i++){
	        arr[i] = v[i];
	    }
	}