#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string x1, x2;
    int p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int X1 = x1.size() + p1;
    int X2 = x2.size() + p2;
    if (X1 > X2)
        cout << ">\n";
    else if (X1 < X2)
        cout << "<\n";
    else
    {
        while (x1.size() < x2.size())
        {
            x1 += '0';
        }
        while (x2.size() < x1.size())
        {
            x2 += '0';
        }
        if (x1 < x2)
            cout << "<\n";
        else if (x1 > x2)
            cout << ">\n";
        else
            cout << "=\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}