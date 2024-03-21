#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char a[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 1, count2 = 0, end = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            if (a[i][0] == '.')
            {
                break;
            }
            if (a[i][0] == a[i][j])
            {
                count++;
            }
            else
            {
                count = 1;
                break;
            }
        }
        if (count == 8)
        {
            cout << a[i][0] << endl;
            count = 1;
            break;
        }
        else
        {
            count = 1;
        }
    }
    for (int j = 0; j < 8; j++)
    {
        for (int i = 1; i < 8; i++)
        {
            if (a[0][j] == '.')
            {
                break;
            }
            if (a[0][j] == a[i][j])
            {
                count++;
            }
            else
            {
                count = 1;
                break;
            }
        }
        if (count == 8)
        {
            cout << a[0][j] << endl;
            count = 1;
            break;
        }
        else
        {
            count = 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}