int maxLength(string s)
{
    int ct = 0;
    int maxCt = 0;
    vector<int> v(s.size(), 1);
    stack<pair<char, int>> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
        {
            st.push({s[i], i});
        }
        else if (s[i] == ')' && st.top().first == '(')
        {
            st.pop();
        }
        else
        {
            st.push({s[i], i});
        }
    }

    while (!st.empty())
    {
        int x = st.top().second;
        st.pop();
        v[x] = 0;
    }

    for (auto x : v)
    {
        if (x == 0)
            ct = 0;
        else
        {
            ct++;
            maxCt = max(ct, maxCt);
        }
    }

    return maxCt;
}