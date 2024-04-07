#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
        {
            cout << s[i];
            if (s[i + 1] == 'a' || s[i + 1] == 'e')
            {
                cout << s[i + 1];
                if (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd')
                {
                    if (s[i + 3] == 'b' || s[i + 3] == 'c' || s[i + 3] == 'd')
                    {
                        cout << s[i + 2] << ".";
                        i += 2;
                    }
                    else if (s[i + 3] == 0)
                    {
                        cout << s[i + 2];
                        i += 2;
                    }

                    else
                    {
                        cout << ".";
                        i++;
                    }
                }
            }
        }
    }
    cout << endl;
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