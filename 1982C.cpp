#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, sum = 0, count = 0, counti = 0;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0, j = 0; i < n; i++)
        {
            sum += a[i];
            // cout << sum << endl;
            while (sum > r)
            {
                sum -= a[j];
                j++;
            }

            if (sum >= l && sum <= r)
            {
                count++;
                sum = 0;
                j = i + 1;
            }
        }
        cout << count << endl;
    }
}
