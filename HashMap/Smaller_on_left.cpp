// Put Your Code here

vector<int> Smallestonleft(int arr[], int n)
{
    set<int>s;
    vector <int> v;
    for (int i = 0; i<n; i++) {
        auto it = s.lower_bound(arr[i]);
        if (it == s.begin()) v.push_back(-1);
        else
            it--,
            v.push_back(*it);
        // Store elements in sorted order
        s.insert(arr[i]);
    }
    return v;
}