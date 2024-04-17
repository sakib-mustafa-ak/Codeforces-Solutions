#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, q, sum = 0;
    cin >> n >> q;

    vector<ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    vector<ll> np(n + 1);
    np[0] = 0;
    np[1] = p[0];
    for (ll i = 2; i <= n; i++)
    {
        np[i] = p[i - 1] + np[i - 1];
    }

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll g = np[n - x + y] - np[n - x];

        cout << g << endl;
    }
}