#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, count = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[0] && arr[i] < arr[n - 1])
            count++;
    }
    cout << count << endl;
}