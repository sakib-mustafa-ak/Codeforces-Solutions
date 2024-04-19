#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, sum1 = 0, sum2 = 0, flag = 0;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        ll x = sum1 + i;
        sum1 += i;
        b.push_back(x);
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        sum2 += a[i];
        if (sum2 < b[i])
        {
            flag = 0;
            break;
        }
        if (sum2 >= b[n - 1])
        {
            flag = 1;
            break;
        }
    }
    (flag == 1) ? cout << "Yes\n" : cout << "No\n";
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