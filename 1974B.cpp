#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;
        string a;
        for (char x = 'a'; x <= 122; x++)
        {
            for (int i = 0; i < n; i++)
            {
                if (x == b[i])
                {
                    a.push_back(x);
                    break;
                }
            }
        }
        // cout << a << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (b[i] == a[j])
                {
                    b[i] = a[a.size() - 1 - j];
                    break;
                }
            }
        }
        cout << b << endl;
    }
}