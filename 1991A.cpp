#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, mx;
        cin >> mx;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            if (i % 2 == 1)
                mx = max(mx, x);
        }
        cout << mx << endl;
    }
}