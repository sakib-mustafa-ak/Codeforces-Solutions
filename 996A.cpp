#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll count = n / 100;
    count += (n % 100) / 20;
    count += ((n % 100) % 20) / 10;
    count += (((n % 100) % 20) % 10) / 5;
    count += ((((n % 100) % 20) % 10) % 5);
    cout << count << endl;
}