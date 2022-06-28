bool comp(pair<int,int> &pr1, pair <int,int> &pr2){
    if (pr1.second < pr2.second){
        return true;
    }
    else if (pr1.second == pr2.second){
        if (pr1.first<pr2.first){
            return true;
        }
    }
}

int maxMeetings(int start[], int end[], int n) { 
    vector <pair<int,int>> v;
    for (int i = 0; i<n; i++){
        v.push_back({start[i], end[i]});
    }
    sort(v.begin(), v.end(), comp);

    int j = 0; 
    int k = 1;
    int ct = 1;

    while(n--){
        if(v[k].first>v[j].second){
            ct++;
            j = k;
            k++;
        }

        else{
            k++;
        }
    }

    if (v.size()==1) return ct-1;
    else return ct;    
}