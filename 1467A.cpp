#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans = 9;
        cin >> n;
        if (n <= 2)
        {
            for (long long i = 0; i < n; i++)
            {
                cout << ans;
                ans--;
            }
            cout << "\n";
        }
        else
        {
            ans = 0;
            cout << "989";
            for (long long i = 3; i < n; i++)
            {
                cout << ans;
                ans++;
                if (ans > 9)
                    ans = 0;
            }
            cout << "\n";
        }
    }
}