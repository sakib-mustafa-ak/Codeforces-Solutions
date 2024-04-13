#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int d, s;
        cin >> d >> s;
        int k = i + s - 1;
        if (k > max)
            max = k;
    }
    cout << max << endl;
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