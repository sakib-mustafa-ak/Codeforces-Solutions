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
        int count = 0, n = s.size();
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                count++;
        }
        if (count == 0)
            cout << 1 << endl;
        else
        {
            if (count == 1 && s[0] == '1' && s[n - 1] == '0')
                count++;
            cout << count << endl;
        }
    }
}
