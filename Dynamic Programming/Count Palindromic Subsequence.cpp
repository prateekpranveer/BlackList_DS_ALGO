const int m = 1e9 + 7;
long long int v[1005][1005];
long long int total(string &str, int i, int j)
{
    if (i > j)
        return 0;
    if (i == j)
        return 1;
    if (v[i][j] != -1)
        return v[i][j];
    if (str[i] == str[j])
        return v[i][j] = (1 + total(str, i + 1, j) + total(str, i, j - 1)) % m;
    else
        return v[i][j] = (m + total(str, i + 1, j) + total(str, i, j - 1) - total(str, i + 1, j - 1)) % m;
}
long long int countPS(string str)
{
    memset(v, -1, sizeof(v));
    long long int i = 0;
    long long int j = str.size() - 1;
    return total(str, i, j) % m;
}