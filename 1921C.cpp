#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, f, a, b, token = 0;

    cin >> n >> f >> a >> b;

    ll arr[n + 1];
    arr[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (ll j = 1; j <= n; j++)
    {
        f -= min((arr[j] - arr[j - 1]) * a, b);
        if (f <= 0)
            break;
    }
    (f > 0) ? cout << "Yes\n" : cout << "No\n";
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