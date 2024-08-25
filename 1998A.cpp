#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int x1 = x, x2 = x;
        if (k % 2 == 1)
            cout << x << " " << y << endl;

        for (int i = 0; i < k / 2; i++)
        {
            cout << ++x1 << " " << y << endl;
            cout << --x2 << ' ' << y << endl;
        }
    }
}