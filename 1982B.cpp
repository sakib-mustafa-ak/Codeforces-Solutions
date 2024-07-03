#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        while (k > 0)
        {
            int adv = y - x % y;
            if (k < adv)
            {
                x += k;
                break;
            }
            k -= adv;
            x += adv;
            while (x % y == 0)
                x /= y;
            if (x == 1)
            {
                k = k % (y - 1);
            }
        }
        cout << x << endl;
    }
}