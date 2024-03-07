#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    string x = s;
    reverse(x.begin(), x.end());
    cout << min(s, x + s) << endl;
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