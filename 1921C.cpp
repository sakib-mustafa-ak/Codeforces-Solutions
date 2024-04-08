#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    for (ll j = 0; j < n; j++)
    {
        for (ll i = 0; i <= arr[n - 1]; i++)
        {
            if ((arr[j] - i) * a > b)
            {
                f -= b;
                i = arr[j];
            }
            else
                f -= a;
            if (f <= 0)
                break;
        }
    }
    (f <= 0) ? cout << "No\n" : cout << "Yes\n";
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