class Solution {
  public:
    int start = 0; int end = 0; int maxi = 0;
    void expand(string S, int i, int j) {
        while (i>=0 && j<S.size() && S[i]==S[j]) {
            if (maxi<j-i+1) {
                maxi = max(maxi, j-i+1);
                start = i;
                end = j;
            }
            i--;
            j++;
        }
    }
    string longestPalin (string S) {
        int s = S.size();
        
            for (int i = 0; i<S.size(); i++) {
                expand(S, i, i+1);
                expand(S, i,i);
            }
        
        
        string si = "";
        
            for (int i = start; i<=end; i++) {
                si.push_back(S[i]);
            }
        return si;
    }
};