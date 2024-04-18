#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            if (abs(a[i] - b[j]) <= k)
            {
                if (j != i)
                    swap(b[j], b[i]);
                break;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
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