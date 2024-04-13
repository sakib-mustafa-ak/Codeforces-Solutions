#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, maxk = INT_MAX;
    cin >> n;
    while (n--)
    {
        int d, s;
        cin >> d >> s;
        int k = d + (s - 1) / 2;
        maxk = min(k, maxk);
    }
    cout << maxk << endl;
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
