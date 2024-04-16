#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, count = 0;
        string s;
        cin >> n >> k >> s;
        ll arr[26] = {0};
        for (ll i = 0; i < n; i++)
        {
            arr[s[i] - 97]++;
        }
        ll cnt = 0;
        for (ll i = 0; i < 26; i++)
        {
            if (arr[i] % 2 != 0)
                cnt++;
        }
        (cnt - k > 1) ? cout << "NO\n" : cout << "YES\n";
    }
}