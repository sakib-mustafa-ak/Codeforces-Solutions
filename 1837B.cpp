#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 1, mx = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '<')
            {
                if (s[i + 1] == '<')
                    count += 1;
                else
                {
                    mx = max(count, mx);
                    count = 1;
                }
            }
            else if (s[i] == '>')
            {
                if (s[i + 1] == '>')
                    count += 1;
                else
                {
                    mx = max(count, mx);
                    count = 1;
                }
            }
        }
        mx = max(count, mx);
        cout << mx + 1 << endl;
    }
}