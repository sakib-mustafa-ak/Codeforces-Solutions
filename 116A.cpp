#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans = 0, count = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        count -= a;
        count += b;
        if (count > ans)
        {
            ans = count;
        }
    }
    cout << ans << endl;
}