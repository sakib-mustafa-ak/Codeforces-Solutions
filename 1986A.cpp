#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int n = max(x1, max(x2, x3));
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int a = abs(x1 - i) + abs(x2 - i) + abs(x3 - i);
            ans.push_back(a);
        }
        sort(ans.begin(), ans.end());
        cout << ans[0] << endl;
    }
}