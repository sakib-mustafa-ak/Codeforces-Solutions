#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j] && j - i != 1)
                {
                    flag = 0;
                    break;
                }
            }
        }
        (flag == 1) ? cout << "Yes\n" : cout << "No\n";
    }
}