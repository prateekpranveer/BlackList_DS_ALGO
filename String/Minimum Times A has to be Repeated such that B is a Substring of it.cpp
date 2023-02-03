    int minRepeats(string A, string B) {
        if (A==B) return 1;
        string toAdd = A;
        int ct = 1;
        while(A.length()<B.length()*2) {
            A+=toAdd;
            ct++;
            if (A.find(B)!=-1) {
                return ct;
            }
        }
        return -1;
    }