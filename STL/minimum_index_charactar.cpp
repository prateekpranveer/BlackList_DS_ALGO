int minIndexChar(string str, string patt)
    {
        int id = INT_MAX;
        unordered_map<char,int>um;
        for (int i = str.size()-1; i>=0; i--){
            um[str[i]] = i; 
        }
        for(int i = 0; i<patt.size(); i++){
            if (um.find(patt[i])!=um.end())
                id = min (id, um[patt[i]]);
        }
        return id != INT_MAX ? id : -1;
    }