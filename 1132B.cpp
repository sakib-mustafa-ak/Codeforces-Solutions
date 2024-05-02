#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n;
    vector<ll> a(n), ans(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        count += a[i];
        // ans[i] = count;
        //  cout << ans[i] << " ";
    }
    // cout << endl;
    for (ll j = 0; j < m; j++)
    {
        // cout << ans[n - 1] << "-" << ans[n - b[j]] << "-" << ans[n - j - 1] << endl;
        ll sum = count - a[n - b[j]];
        cout << sum << endl;
    }
}