#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s;
    cin >> s;
    int ns = 0;
    while (1)
    {
        ns += (s - s % 10);
        s = s % 10 + ((s - s % 10) / 10);
        if (s < 10)
        {
            ns += s;
            break;
        }
    }
    cout << ns << endl;
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