class Solution {
  public:
    long long solve(int n, int k, vector<long long> a) {
        vector<long long>v;
        long long sum = 0;
        for (int i = 0; i<a.size(); i++) {
            v.push_back(a[i]);
            sum+=a[i];
        }
        long long x = 0;
        v.push_back(sum);
        long long y = v.size()-1;
        while(v.size()<n) {
            long long c = sum + v[y]-v[x];
            v.push_back(c);
            sum = c;
            x++;
            y++;
        }
        return v[n-1];
    }
};