#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
            if (a[i] != i)
                flag = 1;
        }

        if (flag == 0)
            cout << 0 << endl;
        else
        {
            if (a[1] == 1 || a[n] == n)
                cout << 1 << endl;
            else if (a[1] == n && a[n] == 1)
                cout << 3 << endl;
            else
                cout << 2 << endl;
        }
    }
}