#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, can = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + can) <= 8)
        {
            k -= (a[i] + can);
            can = 0;
            // cout << (a[i] + can) << " ";
        }
        else
        {
            k -= 8;
            // cout << 8 << " ";
            can = (a[i] + can) - 8;
        }
        if (k <= 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    if (k > 0)
        cout << "-1\n";
}