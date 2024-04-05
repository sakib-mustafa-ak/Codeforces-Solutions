#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, x;
    cin >> n >> k >> x;
    long long fk = k * (k + 1) / 2, lk = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;
    (fk <= x && lk >= x) ? cout << "Yes\n" : cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}