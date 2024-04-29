#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> p(n + 1);
        p[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        for (int i = 1; i <= n; i++)
        {
            if (p[p[i]] == i)
            {
                count++;
                break;
            }
        }
        if (count == 1)
            cout << "2\n";
        else
            cout << "3\n";
    }
}