vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int i = 0;
    int j = n-1;
    
    while (i<n){
        if (arr[i] == x){
            v.push_back(i);
            break;
        }
        
        i++;
    }
    
    while (j>=0){
        if (arr[j] == x){
            v.push_back(j);
            break;
        }
        
        j--;
    }
    
    if (v.size()==1) v.push_back(v[0]);
    if (v.size()==0) {
        v.push_back(-1);
        v.push_back(-1);
    }
    
    return v;
        
}