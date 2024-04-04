#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, i, j;
    cin >> n >> m >> i >> j;
    long long x1, y1, x2, y2;
    if (i <= (n + 1) / 2)
    {
        x1 = n;
        x2 = 1;
    }
    else
    {
        x1 = 1;
        x2 = n;
    }
    if (j <= (m + 1) / 2)
    {
        y1 = m;
        y2 = 1;
    }
    else
    {
        y1 = 1;
        y2 = m;
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}