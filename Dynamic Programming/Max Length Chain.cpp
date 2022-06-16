static bool comp(val &a, val &b)
{
    return (a.second < b.second);
}

/*You are required to complete this method*/
int maxChainLen(struct val p[], int n)
{
    sort(p, p + n, comp);
    int i = 0;
    int j = 1;
    int ct = 1;
    while (j < n)
    {
        if (p[i].second < p[j].first)
        {
            i = j;
            ct++;
        }
        j++;
    }

    return ct;

    // greedy algorithm

    // Your code here
}