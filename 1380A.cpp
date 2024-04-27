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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                flag = 1;
                cout << "Yes\n";
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
        if (flag == 0)
            cout << "No\n";
    }
}