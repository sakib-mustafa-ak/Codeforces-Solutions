#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char x = 'a';
        int flag = 1;
        cout << s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1] && flag == 1)
            {
                (x == s[i]) ? cout << ++x : cout << x;
                flag = 0;
            }
            cout << s[i];
        }
        if (flag == 1)
            (x == s[s.size() - 1]) ? cout << ++x : cout << x;
        cout << "\n";
    }
}