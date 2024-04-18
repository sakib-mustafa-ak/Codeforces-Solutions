#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        ll count5 = 0, p5 = 0, f5 = 0, count0 = 0, f0 = 0, p0 = 0;
        cin >> n;

        ll sz = n.size();

        for (ll i = (sz - 1); i >= 0; i--)
        {
            count5++;
            if (n[i] == '5')
            {
                count5--;
                p5 = i;
                break;
            }
        }
        if (p5 != 0)
        {
            for (ll i = (p5 - 1); i >= 0; i--)
            {
                count5++;
                if (n[i] == '2' || n[i] == '7')
                {
                    f5 = 1;
                    count5--;
                    break;
                }
            }
        }
        for (ll i = (sz - 1); i >= 0; i--)
        {
            count0++;
            if (n[i] == '0')
            {
                count0--;
                p0 = i;
                break;
            }
        }
        if (p0 != 0)
        {
            for (ll i = (p0 - 1); i >= 0; i--)
            {
                count0++;
                if (n[i] == '0' || n[i] == '5')
                {
                    f0 = 1;
                    count0--;
                    break;
                }
            }
        }
        cout << min(count0, count5) << endl;
    }
}