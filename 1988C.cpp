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
        vector<long long> ans;
        ans.push_back(n);
        int x = n;
        for (long long i = n - 1; i > 0; i--)
        {
            int y = x | i;
            if (y == n)
            {
                ans.push_back(i);
                x = i;
            }
        }
        cout << ans.size() << endl;
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}