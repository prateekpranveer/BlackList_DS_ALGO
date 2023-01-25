string caseSort(string str, int n)
    {
        vector<char>v(n,1);
        for (int i = 0; i<n; i++) {
            if(str[i]>=65 && str[i]<=90) v[i] = 0;
        }
        sort(str.begin(),str.end());
        int x = 0;
        for (int i = 0; i<n; i++) {
            if (v[i]==0) {
                v[i] = str[x];
                x++;
            }
        }
        for (int i = 0; i<n; i++) {
            if (v[i]==1) {
                v[i] = str[x];
                x++;
            }
        }
        string news = "";
        for (auto x:v) {
            news.push_back(x);
        }
        return news;
    }