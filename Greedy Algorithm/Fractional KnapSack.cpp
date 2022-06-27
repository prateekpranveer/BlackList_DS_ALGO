static bool comp(pair<double,int> &pr1, pair<double,int> & pr2){
        return pr1.first>pr2.first;
    }

    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector <pair<double,int>> v;
        
        for (int i = 0; i<n; i++){
            double ratio = (arr[i].value*1.0)/(arr[i].weight*1.0);
            v.push_back({ratio, i});
        }
        
        sort(v.begin(),v.end(),comp);
        
        double total = 0;
        int x = 0;
        
        for (int i = 0; i<n; i++){
            
            if ((W-x)<arr[v[i].second].weight){
                total = total + (W-x)*v[i].first;
                break;
            }
            
            total = total + arr[v[i].second].value;
            x = x + arr[v[i].second].weight;
        }

        
        return total;
        // Your code here
    }