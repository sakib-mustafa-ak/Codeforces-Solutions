#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0, count = 0;
        while (n >= k)
        {
            n -= (k - 1);
            ans++;
        }
        if (n > 0 && n != 1)
            ans++;
        cout << ans << endl;
    }
}
