void reverseStack(stack<int> &st, vector<int> &ans)
{
    if (st.empty())
        return;
    int i = st.top();
    st.pop();
    ans.push_back(i);
    reverseStack(st, ans);
}

vector<int> Reverse(stack<int> St)
{
    vector<int> ans;
    reverseStack(St, ans);
    return ans;
}