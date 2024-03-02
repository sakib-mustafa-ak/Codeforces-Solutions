// incorrect code
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int coin = n;
    for (int a = 0; a <= 10; a++)
    {
        for (int b = 0; b <= 10; b++)
        {
            for (int c = 0; c <= 10; c++)
            {
                for (int d = 0; d <= 10; d++)
                {
                    int en = a * 10;
                    en += (b * 6);
                    en += (c * 3);
                    en += (d * 1);
                    if (n - en >= 0)
                    {
                        if ((n - en) % 15 == 0)
                        {
                            coin = min(coin, a + b + c + d + ((n - en) / 15));
                        }
                    }
                }
            }
        }
    }

    cout << coin << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}