#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int fours = 0, count = 0;
    if (s[0] != '1')
    {
        count = 1;
    }
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '1')
        {

            for (int j = i + 1; j <= i + 3; j++)
            {
                if (s[j] == '4')
                {
                    fours++;
                    if (fours > 2)
                    {
                        count = 1;
                        break;
                    }
                }
            }
            if (count == 1)
            {
                break;
            }
            fours = 0;
        }
        else if (s[i] != '4' && s[i] != '1')
        {
            count = 1;
        }
    }
    if (count == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
}