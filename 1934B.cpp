// incorrect code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, coin = 0;
        cin >> n;
        if (n == 30 || n == 20 || n == 12)
        {
            coin = 2;
        }
        else
        {
            while (n > 15)
            {
                n = n - 15;
                coin++;

                if (n == 20 || n == 26 || n == 23 || n == 21)
                {
                    n = n - 20;
                    coin += 2;
                    break;
                }
                else if (n == 12)
                {
                    n = 0;
                    coin += 2;
                    break;
                }
                else if (n < 15)
                {
                    break;
                }
            }
            if (n > 10)
            {
                n -= 10;
                coin++;
            }

            coin = coin + n / 6;
            coin = coin + (n % 6) / 3;
            coin = coin + ((n % 6) % 3) / 1;
        }
        cout << coin << endl;
    }
}