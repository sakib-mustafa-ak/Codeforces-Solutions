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
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                count++;
            else
            {
                b.push_back(count);
                count = 1;
            }
        }
        b.push_back(count);
        int ans = 0;
        for (int i = 0; i < b.size(); i++)
        {
            ans += (b[i] / 3);
        }
        cout << ans << endl;
    }
}