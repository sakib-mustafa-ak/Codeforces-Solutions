#include <bits/stdc++.h>
using namespace std;
#define int long long

int_fast32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int t[n - 2][3];
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 2; i++)
        {
            t[i][0] = a[i];
            t[i][1] = a[i + 1];
            t[i][2] = a[i + 2];
        }
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                if ((t[i][0] != t[j][0] && t[i][1] == t[j][1] && t[i][2] == t[j][2]) ||
                    (t[i][0] == t[j][0] && t[i][1] != t[j][1] && t[i][2] == t[j][2]) ||
                    (t[i][0] == t[j][0] && t[i][1] == t[j][1] && t[i][2] != t[j][2]))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}