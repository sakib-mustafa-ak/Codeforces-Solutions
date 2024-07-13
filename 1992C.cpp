#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        for (int i = n; i > m; i--)
            cout << i << " ";
        for (int i = 1; i <= m; i++)
            cout << i << " ";
        cout << "\n";
    }
}