void segregate0and1(int arr[], int n) {
        stack <int>one;
        stack<int>zero;
        for (int i = 0; i<n; i++){
            if (arr[i]==0) zero.push(0);
            if (arr[i]==1) one.push(1);
        }
        int i = 0;
        while(!zero.empty()){
            arr[i] = 0;
            i++;
            zero.pop();
        }
        while(!one.empty()){
            arr[i] = 1;
            i++;
            one.pop();
        }
    }