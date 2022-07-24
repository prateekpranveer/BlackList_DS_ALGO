vector<int> reaching_height(int n, int arr[]) {
    vector<int>v;
    sort(arr,arr+n);
    for (int i = n-1; i>=n/2; i--){
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    
    if (v.size()!=n){
        while(v.size()!=n){
            v.pop_back();
        }
    }
    
    int sumup = 0;
    int sumdown = 0;
    
    for (int i = 0; i<n; i+=2){
        sumup+=v[i];
    }
    
    for (int i = 1; i<n; i+=2){
        sumdown+=v[i];
    }
    
    if (sumup==sumdown) return {-1};
    
    else return v;
}