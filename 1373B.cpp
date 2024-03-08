#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count1 = 0, count0 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count1++;
        }
        else if (s[i] == '0')
        {
            count0++;
        }
    }
    if (min(count0, count1) % 2 == 1)
    {
        cout << "DA" << endl;
    }
    else if (min(count0, count1) % 2 == 0)
    {
        cout << "NET" << endl;
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