#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ff first
#define ss second
void solve()
{
    vector<int> a(6);
    cin >> a[1];
    cin >> a[2];
    cin >> a[4];
    cin >> a[5];
    vector<int> p = {a[1] + a[2], a[4] - a[2]};
    int ans = 0;
    for (int a3 : p)
    {
        int count = 0;
        if (a3 == a[1] + a[2])
            count++;
        if (a[4] == a[2] + a3)
            count++;
        if (a[5] == a3 + a[4])
            count++;
        ans = max(ans, count);
    }
    cout<<ans<<endl;
}

signed main()
{
    Start int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}