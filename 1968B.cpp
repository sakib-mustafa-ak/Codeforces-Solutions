#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        for (int i = 0, j = 0; i < n && j < m; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
}