#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll i = 0, k = x, count = 0;
        while (1)
        {
            while (k <= y)
            {
                k *= 10;
                count++;
            }
            k /= 10;
            if (k > x)
                count--;
            y -= k;
            k = x;
            if (k * 10 > y)
                break;
        }
        count += y / k;
        count += y % k;
        cout << count << endl;
    }
}