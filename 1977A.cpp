#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, flag = 0;
        cin >> n >> m;
        if (n < m)
            flag = 0;
        else
        {
            if (n == m)
                flag = 1;
            else if ((n - m) % 2 == 0)
                flag = 1;
            else
                flag = 0;
        }
        (flag == 1) ? cout << "Yes\n" : cout << "No\n";
    }
}