char nonrepeatingCharacter(string S)
    {
        unordered_map<char,int>um;
        for (int i = 0; i<S.size(); i++) {
            um[S[i]]++;
        }
        for (auto x:S) {
            if (um[x]==1) return x;
        }
        return '$';
    }