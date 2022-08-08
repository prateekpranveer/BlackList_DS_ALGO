int findFrequency(vector<int> v, int x){
    unordered_map<int,int>um;
    for (int i = 0; i<v.size(); i++){
        if (um.find(v[i])==um.end()){
            um.insert({v[i],1});
        }
        else um[v[i]]++;
    }
    for (auto y : um) {
        if (y.first == x) return y.second;
    }
    // if not found, then its count is zero
    return 0;
}