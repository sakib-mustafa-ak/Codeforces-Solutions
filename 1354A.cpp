#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        ans += b;
        if (b >= a)
            cout << ans << endl;
        else
        {
            a -= b;
            if (c <= d)
                cout << "-1\n";
            else
            {
                ans += c * (a / (c - d));
                if ((a / (c - d)) * (c - d) < a)
                    cout << ans + c << endl;
                else
                    cout << ans << endl;
            }
        }
    }
}