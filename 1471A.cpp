#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, sum = 0, sum2 = 0;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if ((a[i] / x) * x < a[i])
            {
                sum2 += (a[i] / x) + 1;
            }
            else
                sum2 += a[i] / x;
        }
        if ((sum / x) * x < sum)
            sum = (sum / x) + 1;
        else
            sum = sum / x;
        cout << sum << " " << sum2 << endl;
    }
}