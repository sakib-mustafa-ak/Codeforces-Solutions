#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ff first
#define ss second
void solve()
{
    int n, x, y, c = 0;
    cin >> n >> x >> y;
    if (n == 2)
    {
        cout << x << " " << y << endl;
        return;
    }
    vector<int> a;
    a.push_back(x);
    a.push_back(y);
    int mo = (y - x) / (n - 1);
    //cout << mo << endl;
    while (mo * (n - 1) < y - x)
    {
        n--;
        c++;
        mo = (y - x) / (n - 1);
        //cout << -1 << " " << mo << " " << n << endl;
        if (mo * (n - 1) == (y - x))
            break;
    }
    int xx = x;
    for (int i = 0; i < n - 2; i++)
    {
        xx += mo;
        a.push_back(xx);
    }
    while (x - mo > 0 && c > 0)
    {
        x -= mo;
        a.push_back(x);
        c--;
    }
    while (c > 0)
    {
        y += mo;
        a.push_back(y);
        c--;
    }
    for (auto v : a)
        cout << v << " ";
    cout << endl;
}

signed main()
{
    // Start
    int t;
    // cout<<0<<endl;
    cin >> t;
    // cout<<0<<endl;
    while (t--)
    {
        //cout << 0 << endl;
        solve();
    }
}