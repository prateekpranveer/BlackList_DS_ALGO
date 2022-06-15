#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string s, int start, int end)
{
    return 1;
}

int pPartition(string s, int id, int n, vector<string> &v)
{
    if (id == s.size())
    {
    }
    // do partition at index n
    for (int i = id; i <= n; i++)
    {
        if (isPalindrome(s, id, i))
        {
            v.push_back(s.substr(id, i - id + 1));
            pPartition(s, i + 1, n, v);
            v.pop_back();
        }
    }
    // don't do partition at index n
}

int main()
{
    string str = "abcdde";
    int n = str.size();
    vector<string> v;
    cout << pPartition(str, 0, n, v);
}