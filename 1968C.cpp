#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n - 1), a(n);
        for (int i = 0; i < n - 1; i++)
            cin >> x[i];
        a[0] = x[0] + 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > x[i - 1] && x[i - 1] % a[i - 1] == x[i - 1] && x[i - 1] > x[i])
                a[i] = x[i - 1];
            else if ((a[i - 1] + x[i - 1]) % a[i - 1] == x[i - 1] && x[i - 1] > x[i])
                a[i] = a[i - 1] + x[i - 1];
            else
            {
                int monu = (x[i - 1] / a[i - 1] + 1);
                a[i] = monu * a[i - 1] + x[i - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}