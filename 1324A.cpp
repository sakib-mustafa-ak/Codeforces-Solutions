#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = 0, count = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if ((mx - a[i]) % 2 == 1)
            {
                count++;
                break;
            }
        }
        (count > 0) ? cout << "No\n" : cout << "Yes\n";
    }
}