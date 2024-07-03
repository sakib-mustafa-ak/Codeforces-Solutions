#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = a[i][j];
                int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
                if (i - 1 >= 0)
                    x1 = a[i - 1][j];
                if (i + 1 < n)
                    x2 = a[i + 1][j];
                if (j - 1 >= 0)
                    x3 = a[i][j - 1];
                if (j + 1 < m)
                    x4 = a[i][j + 1];
                // cout << x1 << " " << x2 << " " << x3 << " " << x4 << " \n";
                if (x > x1 && x > x2 && x > x3 && x > x4)
                    a[i][j] = max(x1, max(x2, max(x3, x4)));
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}