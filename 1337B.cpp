#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    while (n-- && x > 20)
    {
        x = (x / 2) + 10;
    }
    while (m--)
    {
        x -= 10;
    }
    puts(x <= 0 ? "YES" : "NO");
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