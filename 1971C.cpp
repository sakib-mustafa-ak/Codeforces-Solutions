#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > a && (c > b || c < a))
        {
            (d < b && d > a) ? cout << "YES\n" : cout << "NO\n";
        }
        else if (b > a && (c < b && c > a))
        {
            (d < a || d > b) ? cout << "YES\n" : cout << "NO\n";
        }
        else if (a > b && c < a && c > b)
        {
            (d > a || d < b) ? cout << "YES\n" : cout << "NO\n";
        }
        else if (a > b && c > a || c < b)
        {
            (d < a && d > b) ? cout << "YES\n" : cout << "NO\n";
        }
    }
}