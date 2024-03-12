#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long count = 0, max = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[i + 1] - a[i] <= k)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
    }
    cout << n - max - 1 << endl;
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
