#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a[i] = s[0] - 97;
    }
    sort(a.begin(), a.end());
    int count = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
        }
        else
        {
            if (count >= 2 && count <= 4)
            {
                ans += count - 2;
                count = 1;
            }
            else if (count > 4)
            {
                int x = count / 2;
                ans += x * (x - 1) / 2;
                int y = count - x;
                ans += y * (y - 1) / 2;
                count = 1;
            }
        }
    }
    if (count >= 2 && count <= 4)
    {
        ans += count - 2;
    }
    else if (count > 4)
    {
        int x = count / 2;
        ans += x * (x - 1) / 2;
        int y = count - x;
        ans += y * (y - 1) / 2;
    }
    cout << ans << endl;
}