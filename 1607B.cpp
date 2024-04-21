#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, n, ans = 0;
    cin >> x >> n;
    if (x % 2 == 0)
    {
        if (n % 2 == 0)
        {
            (n % 4 == 0) ? ans = x : ans = x + 1;
        }
        else
        {
            ((n - 1) % 4 == 0) ? ans = x - n : ans = x + n + 1;
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            (n % 4 == 0) ? ans = x : ans = x - 1;
        }
        else
        {
            ((n - 1) % 4 == 0) ? ans = x + n : ans = x - n - 1;
        }
    }
    cout << ans << endl;
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