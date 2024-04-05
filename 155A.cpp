#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n <= 6)
        cout << 15 << endl;
    else
    {
        if (n % 2 == 0)
            cout << (n / 2) * 5 << endl;
        else
            cout << (n / 2 + 1) * 5 << endl;
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