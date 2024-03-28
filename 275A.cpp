#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    int ans[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cin >> a[r][c];
            a[r][c] %= 2;
            ans[r][c] += a[r][c];
            if (r - 1 > -1)
                ans[r - 1][c] += a[r][c];
            if (r + 1 < 3)
                ans[r + 1][c] += a[r][c];
            if (c - 1 > -1)
                ans[r][c - 1] += a[r][c];
            if (c + 1 < 3)
                ans[r][c + 1] += a[r][c];
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            (ans[r][c] % 2 == 0) ? cout << 0 : cout << 1;
        }
        cout << endl;
    }
}