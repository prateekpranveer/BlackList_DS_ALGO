#include <bits/stdc++.h>
using namespace std;

bool jumping(int n)
{
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        int b = n % 10;
        n = (n * 10) + b;
        if (abs(a - b) != 1)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (jumping(n))
        return true;
    return false;
}