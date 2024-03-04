#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int new_a = b - (c - b);
    int new_b = a + (c - a) / 2;
    int new_c = a + (b - a) * 2;
    if (new_a >= a && new_a != 0 && new_a % a == 0)
        cout << "YES";
    else if (new_b >= b && new_b != 0 && (c - a) % 2 == 0 && new_b % b == 0)
        cout << "YES";
    else if (new_c >= c && new_c != 0 && new_c % c == 0)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}