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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<char> ans(n);
        char c = 'a';
        int count = 0;
        int sum = 0;
        while (1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == count)
                {
                    ans[i] = c;
                    count++;
                    a[i] = -1;
                    sum++;
                }
            }
            if (sum == n)
            {
                break;
            }
            count = 0;
            c++;
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
}