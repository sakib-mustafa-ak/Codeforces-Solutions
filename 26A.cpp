#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 2; i++)
    {
        if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') || (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'))
        {
            count++;
            i += 2;
        }
    }
    cout << count << endl;
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