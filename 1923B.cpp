#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n], x[n], health = 0, death = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            health += a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (long long i = 0; i < n; i++)
        {
            a[i] -= k;
            health -= k;
            if (a[i] > 0)
            {
                if (x[i] < 0)
                {
                    x[i] += 1;
                }
                else
                {
                    x[i] -= 1;
                }
                if (x[i] == 0)
                {
                    cout << "NO" << endl;
                    death++;
                    break;
                }
            }

            for (long long j = 0; j < n && i != j; j++)
            {
                if (x[j] < 0)
                {
                    x[j] += 1;
                }
                else
                {
                    x[j] -= 1;
                }
                if (x[j] == 0)
                {
                    cout << "NO" << endl;
                    death++;
                    break;
                }
            }
            if (death > 0)
            {
                break;
            }

            if (health <= 0 && death == 0)
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
}