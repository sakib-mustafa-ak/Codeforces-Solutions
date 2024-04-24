#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
            count1++;
        else
            count2++;
    }
    cout << min(count1, count2) << endl;
}