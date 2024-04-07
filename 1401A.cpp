#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, b;
    cin >> n >> k;
    if (n >= k)
    {
        ((n - k) % 2 == 0) ? cout << "0\n" : cout << "1\n";
    }
    else
    {
        cout << k - n << endl;
    }
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