#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;
    ll x = r - ((r % a) + 1);
    (x >= l && x <= r) ? cout << max(r / a + r % a, x / a + x % a) << endl : cout << r / a + r % a << endl;
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