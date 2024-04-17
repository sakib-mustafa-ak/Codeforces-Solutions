#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, f;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << (n + (2 * k)) << endl;
    }
    else
    {
        for (ll i = 3; i <= n; i += 2)
        {
            if (n % i == 0)
            {
                f = i;
                break;
            }
        }
        cout << (n + f + (2 * (k - 1))) << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
