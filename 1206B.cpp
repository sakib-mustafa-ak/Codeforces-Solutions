#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, count = 0;
    cin >> n;
    vector<ll> arr(n);
    ll neg = 0, zero = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        count += min(abs(arr[i] - 1), abs(arr[i] + 1));
        if (arr[i] < 0)
            neg++;
        else if (arr[i] == 0)
            zero++;
    }

    if (neg % 2 == 0)
        cout << count << endl;
    else
    {
        if (zero > 0)
            cout << count + 1. << endl;
        else
            cout << count + 2 << endl;
    }
}