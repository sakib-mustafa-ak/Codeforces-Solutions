#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int min = a - b, max = a + b;
    if ((min * n > c + d) || (c - d > max * n))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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