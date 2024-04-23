#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;

        for (ll i = 1;; i++)
        {
            if (n % i != 0)
                break;
            ans++;
        }
        cout << ans << endl;
    }
}