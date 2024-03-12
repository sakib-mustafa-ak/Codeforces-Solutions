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
    long long count = 0, ass = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] <= k)
        {
            count++;
        }
        else
        {
            if (count > ass)
            {
                ass = count;
            }
            count = 0;
        }
    }
    ass = max(count, ass);
    cout << n - ass - 1 << endl;
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
