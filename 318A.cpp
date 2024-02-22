#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long a[n], x = 1, y = 2;
    for (long long i = 0; i < (n + 1) / 2; i++)
    {
        a[i] = x;
        x += 2;
    }
    for (long long i = (n + 1) / 2; i < n; i++)
    {
        a[i] = y;
        y += 2;
    }
    printf("%lld\n", a[k - 1]);
    return 0;
}