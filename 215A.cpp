#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                ans.push_back(b[j] / a[i]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    ll count = 1;
    for (ll i = ans.size() - 2; i >= 0; i--)
    {
        if (ans[i] == ans[i + 1])
        {
            count++;
        }
        else
            break;
    }
    cout << count << endl;
}