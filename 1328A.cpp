#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long target = a / b;
        (a % b == 0) ? cout << "0\n" : cout << (a / b + 1) * b - a << endl;
    }
}