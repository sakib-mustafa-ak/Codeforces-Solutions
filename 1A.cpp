#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll countn = n / a, countm = m / a;
    if (countn * a != n)
        countn++;
    if (countm * a != m)
        countm++;
    cout << countn * countm << endl;
}