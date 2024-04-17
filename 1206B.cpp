#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, count = 0;
    cin >> n;
    vector<ll> arr(n);
    ll neg = 0, zeros = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        count += min(abs(arr[i] - 1), abs(arr[i] + 1));
        if (arr[i] < 0)
            neg++;
        else if (arr[i] == 0)
            zeros++;
    }

    if (neg % 2 == 1)
    {
        if (zeros > 0)
            count;
        else
            count += 2;
    }
    cout << count << endl;
}