#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mn = min(a, min(b, c));
        if (a % mn == 0 && b % mn == 0 && c % mn == 0)
        {
            int count = a / mn + b / mn + c / mn;
            (count - 3 > 3) ? cout << "No\n" : cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}