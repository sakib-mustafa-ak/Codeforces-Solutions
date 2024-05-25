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
        sort(a.begin(), a.end());
        for (int i = 2; i < n; i++)
        {
            if (a[i] % a[0] != 0 && a[i] % a[1] != 0)
            {
                flag = 0;
                cout << "No\n";
                break;
            }
        }
        if (flag == 1)
            cout << "Yes\n";
    }
}