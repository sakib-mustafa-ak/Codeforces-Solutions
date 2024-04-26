#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, flag = 0;
        cin >> x >> y;
        ll a = x - y;
        if (a < 2)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}