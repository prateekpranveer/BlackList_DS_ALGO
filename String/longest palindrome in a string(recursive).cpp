
class Solution {
  public:
  bool isPal(string s) {
      string temp = s;
      reverse(s.begin(), s.end());
      return s == temp;
  }
    pair<int,int> pr;
    int curr = 0;
    void match(string s, int i ,int j) {
        if (i==j || i>j) return;
        if (isPal(s.substr(i,j))) {
            if (j-i>curr) {
                pr.first = i;
                pr.second = j;
                curr = j-i;
            }
        }
        match(s, i+1,j);
        match(s, i,j-1);
    }
    string longestPalin (string S) {
        match(S,0, S.size()-1);
        return S.substr(pr.first, pr.second);
    }
};