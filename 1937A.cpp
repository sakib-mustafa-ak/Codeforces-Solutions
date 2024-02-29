#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a = 1;
        while (a * 2 <= n)
        {
            a *= 2;
        }
        cout << a << endl;
    }
}