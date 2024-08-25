#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, num = 0, flag = 1, mid, sum = 0;
        cin >> n >> k;
        vector<int> a(n), b(n), a2(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
                num++;
        }
        if (num > 0 && num <= k)
        {
            int hulu, hulu2 = 0;
            hulu = k / num;
            if (k % num != 0)
                hulu2 += (k % num);
            // cout << hulu << " " << hulu2 << endl;
            for (int i = 0; i < n; i++)
            {
                if (b[i] == 1)
                    a[i] += hulu;
                if (flag == 1)
                {
                    a[i] += hulu2;
                    flag = 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < n && k != 0; i++)
            {
                if (b[i] == 1)
                {
                    a[i] += 1;
                    k--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            a2[i] = a[i];
        }

        sort(a2.begin(), a2.end());
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            temp = a[i];
            a[i] = 0;

            if ((n - 1) % 2 == 0)
                mid = (n - 1) / 2;
            else
                mid = n / 2;
            mx = max(mx, temp + a[mid]);
            a[i] = temp;
        }

        // cout << a[n - 1] << " " << a[mid] << endl;
        cout << mx << endl;
    }
}