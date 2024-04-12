#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll maxj = -1000000000;
    while (n--)
    {
        ll f, t;
        cin >> f >> t;
        if (t > k)
            maxj = max(maxj, f - t + k);
        else
            maxj = max(maxj, f);
    }
    cout << maxj << endl;
}