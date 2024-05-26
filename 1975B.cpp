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
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] % a[0] != 0)
                b.push_back(a[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] % b[0] != 0)
            {
                flag = 0;
                break;
            }
        }
        (flag == 1) ? cout << "Yes\n" : cout << "No\n";
    }
}