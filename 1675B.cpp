#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, count = 0, flag = 0;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1])
        {
            count++;
            a[i] /= 2;
            if (a[i] == 0 && a[i] == a[i + 1])
            {
                cout << "-1\n";
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0)
        cout << count << endl;
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