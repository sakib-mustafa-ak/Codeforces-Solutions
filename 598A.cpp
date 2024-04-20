#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i = 0;
        cin >> n;
        ll sum = n * (n + 1) / 2, sum2 = 0;
        while (pow(2, i) <= n)
        {
            sum2 += pow(2, i);
            i++;
        }
        cout << sum - (2 * sum2) << endl;
    }
}