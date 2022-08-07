vector<int> increment(vector<int> arr ,int N) {
        vector<int>v;
        int carry = 1;
        for (int i = N-1; i>=0; i--){
            if (arr[i]==9){
                if (carry==1){
                    v.push_back(0);
                }
                else{
                    v.push_back(9);
                }
            }
            else{
                if (carry==1){
                    v.push_back(arr[i]+1);
                    carry = 0;
                }
                else{
                    v.push_back(arr[i]);
                }
            }
        }
        if (carry==1){
            v.push_back(1);
        }
        reverse(v.begin(),v.end());
        return v;
    }