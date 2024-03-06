#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a += 1;
        }
        else if (s[i] == 'D')
        {
            d += 1;
        }
    }
    if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a < d)
    {
        cout << "Danik" << endl;
    }
}
int main()
{
    solve();
}