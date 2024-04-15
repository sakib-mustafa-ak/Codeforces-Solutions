#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll a[n], mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            if (i == 0 && a[1] != mx)
            {
                ans = i + 1;
                break;
            }
            else if (i == n - 1 && a[i - 1] != mx)
            {
                ans = i + 1;
                break;
            }
            else if (i > 0 && i < n - 1)
            {
                if (a[i - 1] != mx || a[i + 1] != mx)
                {
                    ans = i + 1;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}