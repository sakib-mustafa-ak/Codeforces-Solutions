#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), mx;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mxx;
        for (int i = 1; i < n; i++)
            mx.push_back(max(a[i - 1], a[i]));
        sort(mx.begin(), mx.end());
        cout << mx[0] - 1 << endl;
    }
}